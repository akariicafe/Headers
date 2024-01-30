@class NSString, SXDOM, SXComponents, SXJSONObjectMerger;
@protocol SXDocumentStyle, SXAutoPlacement, SXDocumentControllerProvider;

@interface SXDOMObjectProvider : NSObject <SXDOMObjectProviding> {
    id<SXDocumentControllerProvider> _documentControllerProvider;
    SXJSONObjectMerger *_componentStyleMerger;
    SXJSONObjectMerger *_componentTextStyleMerger;
}

@property (retain, nonatomic) SXDOM *DOM;
@property (readonly, nonatomic) id<SXDocumentStyle> documentStyle;
@property (readonly, nonatomic) SXComponents *components;
@property (readonly, nonatomic) id<SXAutoPlacement> autoPlacement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)componentLayoutForIdentifier:(id)a0;
- (id)componentStyleForComponent:(id)a0;
- (id)resourceForIdentifier:(id)a0;
- (id)imageResourceForIdentifier:(id)a0;
- (id)textStyleForIdentifier:(id)a0 component:(id)a1;
- (id)componentTextStyleForIdentifier:(id)a0 component:(id)a1;
- (id)componentTextStyleForIdentifiers:(id)a0 component:(id)a1;
- (id)componentTextStyleForIdentifier:(id)a0 classification:(id)a1 component:(id)a2;
- (id)componentTextStyleForIdentifier:(id)a0 inheritingFromComponentTextStyle:(id)a1 component:(id)a2;
- (id)initWithDocumentControllerProvider:(id)a0 componentStyleMerger:(id)a1 componentTextStyleMerger:(id)a2;
- (id)componentStyleForIdentifiers:(id)a0;

@end
