@class NSString, NSCalendar, NSObject;
@protocol OS_dispatch_queue;

@interface ACHAwardsServer : HDStandardTaskServer <ACHAwardsServerInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)remote_fetchMostRecentEarnedInstancesForTemplateUniqueNames:(id)a0 completion:(id /* block */)a1;
- (id)_transactionContextForWritingProtectedDataWithIdentifier:(id)a0;
- (void)remote_fetchAllTemplatesWithCompletion:(id /* block */)a0;
- (void)remote_fetchAllEarnedInstancesWithCompletion:(id /* block */)a0;
- (void)remote_fetchMostRecentEarnedInstanceForTemplateUniqueName:(id)a0 completion:(id /* block */)a1;
- (void)remote_removeAllEarnedInstancesWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (void)remote_addOrUpdateTemplates:(id)a0 completion:(id /* block */)a1;
- (void)remote_removeAllTemplatesWithCompletion:(id /* block */)a0;
- (void)remote_fetchEarnedInstancesForTemplateUniqueName:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchEarnedInstancesForEarnedDateComponentsString:(id)a0 completion:(id /* block */)a1;
- (void)remote_removeEarnedInstances:(id)a0 completion:(id /* block */)a1;
- (void)remote_addEarnedInstances:(id)a0 completion:(id /* block */)a1;
- (void)remote_addTemplates:(id)a0 removingTemplates:(id)a1 completion:(id /* block */)a2;
- (void)remote_removeEarnedInstancesForTemplateUniqueName:(id)a0 completion:(id /* block */)a1;
- (void)remote_addTemplates:(id)a0 completion:(id /* block */)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_countOfEarnedInstancesForUniqueNames:(id)a0 completion:(id /* block */)a1;
- (void)protectedDataAvailableWithCompletion:(id /* block */)a0;
- (id)_transactionContextForReadingProtectedDataWithIdentifier:(id)a0;
- (void)remote_countOfEarnedInstancesForTemplateUniqueName:(id)a0 completion:(id /* block */)a1;
- (void)remote_removeTemplates:(id)a0 completion:(id /* block */)a1;
- (void)remote_addEarnedInstances:(id)a0 removingEarnedInstances:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
