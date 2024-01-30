@class NSString, UIColor, UILabel;

@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {
    UILabel *_emojiSectionHeader;
}

@property (copy, nonatomic) NSString *headerName;
@property (copy, nonatomic) UIColor *headerTextColor;
@property (nonatomic) double headerFontSize;
@property (nonatomic) double headerOpacity;
@property (nonatomic) BOOL useVibrantBlend;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
