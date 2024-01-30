@class NSString;

@interface SAHLWorkoutType : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *swimmingLocationType;
@property (copy, nonatomic) NSString *workoutCategory;
@property (copy, nonatomic) NSString *workoutLocationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)workoutType;
+ (id)workoutTypeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
