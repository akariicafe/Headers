@class AUPasscodeCodecConfiguration, APCListenerEngine, APCListenerResultData, NSObject;
@protocol OS_dispatch_queue;

@interface APCListener : NSObject {
    AUPasscodeCodecConfiguration *_codecConfig;
    APCListenerEngine *_listenerEngine;
    APCListenerResultData *_resultData;
}

@property (copy, nonatomic) id /* block */ retrievedDataHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)capabilityData;

- (void)startListening;
- (void)stopListening;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigurationData:(id)a0;
- (void)startListeningWithError:(id *)a0;
- (BOOL)getResultData:(id *)a0;
- (id)initWithCodecConfiguration:(id)a0;

@end
