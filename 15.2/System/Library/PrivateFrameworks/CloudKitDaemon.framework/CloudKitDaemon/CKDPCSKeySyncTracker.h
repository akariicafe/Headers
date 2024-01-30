@class NSError, NSString, NSDate, NSObject, NSNumber;
@protocol OS_dispatch_group;

@interface CKDPCSKeySyncTracker : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic, getter=isManatee) BOOL manatee;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *syncGroup;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSNumber *syncStatus;
@property (retain, nonatomic) NSError *syncError;
@property (nonatomic) BOOL KRSReturnedExistingIdentity;

- (void)waitOnSyncWithQueue:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
