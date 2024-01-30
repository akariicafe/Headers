@class NSString, HKElectrocardiogram;

@interface HKElectrocardiogramQuery : HKQuery <HKElectrocardiogramQueryClientInterface> {
    HKElectrocardiogram *_elecrocardiogram;
    long long _lead;
    id /* block */ _dataHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (id)initWithElectrocardiogram:(id)a0 dataHandler:(id /* block */)a1;
- (void)_enumerateDataWithHandler:(id /* block */)a0;
- (void)client_deliverData;
- (id)initWithElectrocardiogram:(id)a0 lead:(long long)a1 dataHandler:(id /* block */)a2;

@end
