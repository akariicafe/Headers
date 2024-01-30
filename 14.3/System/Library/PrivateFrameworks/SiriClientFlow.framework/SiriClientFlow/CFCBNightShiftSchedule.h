@class CFCBNightShiftTransitionTime, NSString;

@interface CFCBNightShiftSchedule : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CFCBNightShiftTransitionTime *fromTime;
@property (retain, nonatomic) CFCBNightShiftTransitionTime *toTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)nightShiftSchedule;
+ (id)nightShiftScheduleWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
