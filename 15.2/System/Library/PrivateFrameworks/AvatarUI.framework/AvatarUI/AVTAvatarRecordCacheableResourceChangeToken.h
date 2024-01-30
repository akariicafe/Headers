@class NSString, NSNotificationCenter;

@interface AVTAvatarRecordCacheableResourceChangeToken : NSObject <AVTCacheableResourceChangeToken>

@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startObservingChanges;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (void)stopObservingChanges;
- (id)initWithEnvironment:(id)a0 recordIdentifier:(id)a1 changeHandler:(id /* block */)a2;

@end
