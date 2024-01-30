@class NSString, NSArray, NSDictionary;

@interface _ICQTextView : UITextView

@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSArray *links;
@property (retain, nonatomic) NSDictionary *attributes;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)setAttributedText;

@end
