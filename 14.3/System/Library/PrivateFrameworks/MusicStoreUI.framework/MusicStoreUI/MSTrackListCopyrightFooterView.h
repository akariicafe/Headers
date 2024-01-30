@class NSString;

@interface MSTrackListCopyrightFooterView : UIView {
    struct CGSize { double width; double height; } _textSize;
}

@property (retain, nonatomic) NSString *text;

- (void)sizeToFit;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })_textSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
