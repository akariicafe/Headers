@class NSString, NSObject;
@protocol OS_dispatch_group;

@interface NSFileCoordinatorReacquisitionBlockCompletion : NSObject <NSFileCoordinationRetainedAccess> {
    NSObject<OS_dispatch_group> *group;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)completionWithBlock:(id /* block */)a0 queue:(id)a1;

- (void)decrement;
- (void)dealloc;
- (void)increment;

@end
