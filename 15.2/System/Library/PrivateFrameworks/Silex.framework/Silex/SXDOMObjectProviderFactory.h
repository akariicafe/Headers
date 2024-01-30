@class NSString, SXJSONObjectMerger;
@protocol SXDocumentControllerProvider;

@interface SXDOMObjectProviderFactory : NSObject <SXDOMObjectProviderFactory>

@property (readonly, nonatomic) id<SXDocumentControllerProvider> documentControllerProvider;
@property (readonly, nonatomic) SXJSONObjectMerger *componentStyleMerger;
@property (readonly, nonatomic) SXJSONObjectMerger *componentTextStyleMerger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createDOMObjectProvider;
- (id)initWithDocumentControllerProvider:(id)a0 componentStyleMerger:(id)a1 componentTextStyleMerger:(id)a2;

@end
