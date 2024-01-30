@interface PBItemDetection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL present;
@property (readonly, nonatomic) id value;

+ (id)_allowedValueClasses;
+ (id)detectionAbsent;
+ (id)detectionPresent;
+ (id)detectionPresentWithValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPresent:(BOOL)a0 value:(id)a1;

@end
