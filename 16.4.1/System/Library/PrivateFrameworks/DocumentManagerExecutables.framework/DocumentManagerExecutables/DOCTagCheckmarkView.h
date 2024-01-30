@class NSString, NSLayoutConstraint, DOCTag;

@interface DOCTagCheckmarkView : UIImageView <DOCTagIconView> {
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) DOCTag *itemTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)checkmarkImage;

- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateHeightConstraint;

@end
