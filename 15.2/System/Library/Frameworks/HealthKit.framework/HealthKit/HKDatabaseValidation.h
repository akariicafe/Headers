@class NSString, HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HKDatabaseValidation : NSObject <_HKXPCExportable, HKDatabaseValidationClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    id /* block */ _integrityErrorHandler;
    id /* block */ _validationErrorHandler;
    NSMutableDictionary *_integrityErrorHandlerDict;
    NSMutableDictionary *_validationErrorHandlerDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)clientRemote_processIntegrityErrorString:(id)a0 errorHandlerIdentifier:(id)a1;
- (void)clientRemote_processValidationError:(id)a0 errorHandlerIdentifier:(id)a1;
- (void)clientRemote_synchronizeWithCompletion:(id /* block */)a0 success:(BOOL)a1 error:(id)a2;
- (void)performIntegrityCheckOnDatabase:(long long)a0 identifier:(id)a1 errorHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)validateEntitiesWithIdentifier:(id)a0 errorHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)exportedInterface;

@end
