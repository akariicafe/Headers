@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HIDDisplayIOReportingInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
    id /* block */ _dataHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)cancel;
- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (void)setCancelHandler:(id /* block */)a0;
- (id)initWithService:(unsigned int)a0;
- (void)activate;
- (void)setDispatchQueue:(id)a0;
- (id)getHIDDevices;
- (BOOL)setupIOReporting;
- (void)setInputDataHandler:(id /* block */)a0;
- (BOOL)setOutputData:(id)a0 error:(id *)a1;

@end
