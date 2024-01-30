@class UIColor, NSString, UISwitch, UIImage;

@interface PRXFeature : NSObject

@property (readonly, nonatomic) id /* block */ handler;
@property (weak, nonatomic) UISwitch *switchControl;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIColor *tintColor;
@property (nonatomic, getter=isOn) BOOL on;

+ (id)optionalFeatureWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 tintColor:(id)a3 valueChangedBlock:(id /* block */)a4;
+ (id)featureWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 tintColor:(id)a3;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 tintColor:(id)a3 valueChangedBlock:(id /* block */)a4;

@end
