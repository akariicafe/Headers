@class NSString, NSObject;
@protocol OS_dispatch_queue, HMDMultiUserStatusControllerDelegate;

@interface HMDMultiUserStatusController : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak) id<HMDMultiUserStatusControllerDelegate> delegate;
@property long long multiUserState;
@property unsigned long long haveActiveSignedInAccount;
@property unsigned long long dataSyncState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
