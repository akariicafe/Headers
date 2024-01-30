@class NSString;

@interface WKInterfaceObject : NSObject

@property (copy, nonatomic) NSString *interfaceProperty;
@property (copy, nonatomic) NSString *viewControllerID;
@property (retain, nonatomic) NSString *propertyIndex;
@property (nonatomic) long long tableIndex;
@property (nonatomic) long long rowIndex;

- (void)setVerticalAlignment:(long long)a0;
- (void)setHorizontalAlignment:(long long)a0;
- (void)setRotation:(double)a0;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)setAlpha:(double)a0;
- (void)setWidth:(double)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)setIsAccessibilityElement:(BOOL)a0;
- (void)setHeight:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)setAccessibilityHint:(id)a0;
- (void).cxx_destruct;
- (void)setAccessibilityValue:(id)a0;
- (void)setAccessibilityTraits:(unsigned long long)a0;
- (id)init;
- (void)_sendValueChanged:(id)a0 forProperty:(id)a1;
- (id)_initWithInterfaceProperty:(id)a0 viewControllerID:(id)a1 propertyIndex:(long long)a2 tableIndex:(long long)a3 rowIndex:(long long)a4;
- (void)_setupWithDescription:(id)a0 forController:(id)a1;
- (void)didRegisterWithRemoteInterface;
- (void)_setImage:(id)a0 forProperty:(id)a1;
- (void)_setImageData:(id)a0 forProperty:(id)a1;
- (void)_setImageNamed:(id)a0 forProperty:(id)a1;
- (void)_sendValueChanged:(id)a0;
- (void)setRelativeWidth:(double)a0 withAdjustment:(double)a1;
- (void)setRelativeHeight:(double)a0 withAdjustment:(double)a1;
- (void)sizeToFitWidth;
- (void)sizeToFitHeight;
- (void)setAccessibilityImageRegions:(id)a0;

@end
