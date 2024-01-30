@class NSObject;
@protocol CKVAdminServiceProvider, OS_dispatch_queue;

@interface CKVAdministratorFactory : NSObject <CKVAdministratorProvider> {
    NSObject<CKVAdminServiceProvider> *_serviceProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedAdministratorFactory;

- (void).cxx_destruct;
- (id)init;
- (id)administrator;
- (id)initWithServiceProvider:(id)a0;

@end
