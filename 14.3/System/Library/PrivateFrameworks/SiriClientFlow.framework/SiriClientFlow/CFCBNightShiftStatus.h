@class NSString, CFCBNightShiftSchedule;

@interface CFCBNightShiftStatus : SADomainCommand <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL active;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *nightShiftMode;
@property (retain, nonatomic) CFCBNightShiftSchedule *nightShiftSchedule;
@property (nonatomic) BOOL sunSchedulePermitted;
@property (nonatomic) BOOL supported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)nightShiftStatus;
+ (id)nightShiftStatusWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
