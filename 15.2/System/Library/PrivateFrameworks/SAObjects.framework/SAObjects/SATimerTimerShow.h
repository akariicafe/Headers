@class NSArray, NSString;

@interface SATimerTimerShow : SADomainCommand <SATimerTimerAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *timerIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timerShow;
+ (id)timerShowWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
