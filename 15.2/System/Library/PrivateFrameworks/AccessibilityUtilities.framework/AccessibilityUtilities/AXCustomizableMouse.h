@class NSString, NSArray, NSMutableDictionary;

@interface AXCustomizableMouse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long vendorId;
@property (readonly, nonatomic) long long productId;
@property (readonly, nonatomic) BOOL hasCustomActions;
@property (readonly, nonatomic) BOOL customActionsRequireAssistiveTouch;
@property (readonly, nonatomic) NSArray *buttonsWithCustomActions;
@property (retain, nonatomic) NSMutableDictionary *buttonMap;

+ (id)deserialize:(id)a0;
+ (id)serialize:(id)a0;
+ (id)_newOrExistingMouseForIdentifier:(id)a0 name:(id)a1 vendorId:(id)a2 productId:(id)a3;
+ (id)_existingMouseForIdentifier:(id)a0 vendorId:(long long)a1 productId:(long long)a2;
+ (id)mouseForHIDDevice:(struct __IOHIDDevice { } *)a0;
+ (id)mouseForHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToMouse:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToIdentifier:(id)a0 vendorId:(long long)a1 productId:(long long)a2;
- (id)initWithIdentifier:(id)a0 name:(id)a1 vendorId:(long long)a2 productId:(long long)a3;
- (void)setCustomAction:(id)a0 forButtonNumber:(long long)a1;
- (void)setDefaultActionForButtonNumber:(long long)a0;
- (id)customActionForButtonNumber:(long long)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;

@end
