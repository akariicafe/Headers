@class NSString;

@interface DOCTagCheckmarkView : UIImageView <DOCTagIconView>

@property (nonatomic) long long tagColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)checkmarkImage;

- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
