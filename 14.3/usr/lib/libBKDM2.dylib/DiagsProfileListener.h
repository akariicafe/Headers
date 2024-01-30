@class NSString;

@interface DiagsProfileListener : NSObject <MCProfileConnectionObserver>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)a0 userInfo:(id)a1;

@end
