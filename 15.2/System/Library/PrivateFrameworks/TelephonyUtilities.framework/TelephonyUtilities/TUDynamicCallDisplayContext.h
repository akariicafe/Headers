@class CXCallDirectoryManager, NSObject;
@protocol OS_dispatch_queue, TUDynamicCallDisplayContextDelegate;

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) CXCallDirectoryManager *callDirectoryManager;
@property (weak, nonatomic) id<TUDynamicCallDisplayContextDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCall:(id)a0 contactIdentifier:(id)a1 serialQueue:(id)a2;
- (id)initWithCall:(id)a0 contactIdentifier:(id)a1 serialQueue:(id)a2 contactsDataSource:(id)a3;
- (void)_initializeSynchronousStateWithCall:(id)a0 contactIdentifier:(id)a1 contactsDataProvider:(id)a2;
- (void)_initializeAsynchronousStateWithCall:(id)a0;
- (id)initWithDisplayContext:(id)a0 call:(id)a1 serialQueue:(id)a2;

@end
