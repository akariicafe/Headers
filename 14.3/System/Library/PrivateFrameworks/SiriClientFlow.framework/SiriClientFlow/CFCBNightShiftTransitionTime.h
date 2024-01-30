@class NSString;

@interface CFCBNightShiftTransitionTime : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long hour;
@property (nonatomic) long long minute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)nightShiftTransitionTime;
+ (id)nightShiftTransitionTimeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
