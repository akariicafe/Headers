@class NSString;

@interface SATimerCancel : SADomainCommand <SATimerTimerAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cancel;
+ (id)cancelWithDictionary:(id)a0 context:(id)a1;

@end
