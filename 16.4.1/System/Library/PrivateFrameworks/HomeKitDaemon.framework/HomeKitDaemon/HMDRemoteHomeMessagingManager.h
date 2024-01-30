@class NSString, NSMapTable;

@interface HMDRemoteHomeMessagingManager : NSObject <HMFLogging, HMDRemoteHomeMessagingManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMapTable *homeUUIDToHandlerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
