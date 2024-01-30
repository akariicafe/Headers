@class NSString, _HKXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface HDHealthRecordsXPCServiceClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (id)remoteInterface;
- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)exportedInterface;
- (void)dealloc;
- (void)_synchronousPerformWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)processOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)rulesVersionForFHIRDocumentExtractionWithError:(id *)a0;
- (id)supportedFHIRConfigurationWithError:(id *)a0;
- (void)executeFHIRReferenceExtractionRequest:(id)a0 completion:(id /* block */)a1;
- (void)executeFHIRExtractionRequest:(id)a0 completion:(id /* block */)a1;
- (void)optInDataForFHIRDocumentWithRequest:(id)a0 redactor:(id)a1 completion:(id /* block */)a2;
- (void)preprocessSignedClinicalData:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)preprocessSignedClinicalDataFHIRResourceObject:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)reprocessOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)processSignedClinicalDataContextCollection:(id)a0 completion:(id /* block */)a1;

@end
