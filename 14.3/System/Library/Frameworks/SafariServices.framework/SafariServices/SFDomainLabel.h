@class NSString, UILabel;

@interface SFDomainLabel : UIView {
    UILabel *_label;
    BOOL _attributedStringNeedsUpdate;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;

- (void)_commonInit;
- (void).cxx_destruct;
- (void)setText:(id)a0 isSecure:(BOOL)a1;
- (id)_makeAttributedString;
- (id)initWithText:(id)a0 isSecure:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
