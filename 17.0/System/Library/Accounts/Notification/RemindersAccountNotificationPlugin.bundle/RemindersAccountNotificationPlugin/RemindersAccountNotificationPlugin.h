@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface RemindersAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relevantAccountTypeIdentifiers;

- (id)init;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void).cxx_destruct;
- (void)updateAccountForACAccount:(id)a0;
- (BOOL)shouldProcessChangeType:(int)a0 forACAccount:(id)a1;
- (void)deleteAccountForACAccount:(id)a0;

@end
