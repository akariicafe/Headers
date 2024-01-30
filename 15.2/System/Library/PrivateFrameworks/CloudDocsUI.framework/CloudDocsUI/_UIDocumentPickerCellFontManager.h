@class UIFont;

@interface _UIDocumentPickerCellFontManager : NSObject

@property (retain, nonatomic) UIFont *titleFontForGridLayout;
@property (retain, nonatomic) UIFont *subtitleFontForGridLayout;
@property (retain, nonatomic) UIFont *titleFontForTableLayout;
@property (retain, nonatomic) UIFont *subtitleFontForTableLayout;

+ (id)sharedFontManager;

- (void).cxx_destruct;
- (id)init;
- (void)cacheFonts;

@end
