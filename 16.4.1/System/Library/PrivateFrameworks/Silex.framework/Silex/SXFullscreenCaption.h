@class NSString, SXFormattedText;
@protocol SXFullscreenCaptionDataSource;

@interface SXFullscreenCaption : NSObject <SXTextSourceDataSource> {
    NSString *_text;
    SXFormattedText *_caption;
    id<SXFullscreenCaptionDataSource> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)additionsForTextSource:(id)a0;
- (id)componentTextStyleForTextSource:(id)a0 inheritingFromDefaultStyles:(BOOL)a1;
- (id)contentSizeCategoryForTextSource:(id)a0;
- (id)defaultComponentTextStyleForTextSource:(id)a0;
- (id)defaultComponentTextStylesForTextSource:(id)a0;
- (id)inlineTextStylesForTextSource:(id)a0;
- (id)textResizerForTextSource:(id)a0;
- (id)textRulesForTextSource:(id)a0;
- (id)textStyleForIdentifier:(id)a0;

@end
