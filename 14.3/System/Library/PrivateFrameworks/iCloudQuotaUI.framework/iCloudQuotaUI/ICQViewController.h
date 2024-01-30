@class _ICQPageSpecification, UIColor, NSString;
@protocol ICQPageDelegate;

@interface ICQViewController : UIViewController <ICQPageDelegate>

@property (readonly, nonatomic) _ICQPageSpecification *pageSpecification;
@property (copy, nonatomic) UIColor *buttonTintColor;
@property (weak, nonatomic) id<ICQPageDelegate> pageDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewControllerClassForPageClassIdentifier:(id)a0;
+ (BOOL)supportsPageClassIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithPageSpecification:(id)a0;
- (void)sender:(id)a0 action:(long long)a1 parameters:(id)a2;

@end
