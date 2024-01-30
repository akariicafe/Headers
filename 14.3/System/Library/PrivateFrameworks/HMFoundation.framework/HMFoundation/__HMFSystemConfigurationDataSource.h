@class NSString, NSObject;
@protocol OS_dispatch_queue, HMFSystemInfoNameDataSourceDelegate;

@interface __HMFSystemConfigurationDataSource : HMFObject <HMFSystemInfoNameDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) struct __SCDynamicStore { } *store;
@property (weak) id<HMFSystemInfoNameDataSourceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
