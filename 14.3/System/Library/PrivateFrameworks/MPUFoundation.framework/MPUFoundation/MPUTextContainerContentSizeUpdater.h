@class NSString;
@protocol MPUTextContainer;

@interface MPUTextContainerContentSizeUpdater : NSObject

@property (retain, nonatomic) NSString *lastSeenPreferredContentSizeCategory;
@property (weak, nonatomic) id<MPUTextContainer> textContainer;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_preferredContentSizeCategoryDidChange:(id)a0;
- (void)_updateTextStyleFonts;
- (void)ensureTextStyleFontsMatchPreferredTextStyleFonts;

@end
