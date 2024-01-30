@class SATimerObject, NSString;

@interface SATimerSet : SADomainCommand <SATimerTimerAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SATimerObject *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)set;
+ (id)setWithDictionary:(id)a0 context:(id)a1;

@end
