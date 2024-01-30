@class NSString, NSNumber, CFCBNightShiftSchedule;

@interface CFCBSetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *option;
@property (retain, nonatomic) CFCBNightShiftSchedule *schedule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)setNightShiftMode;
+ (id)setNightShiftModeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (void)handleWithCompletion:(id /* block */)a0;

@end
