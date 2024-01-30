@class AXPhoenixConfiguration, NSDateFormatter, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXPhoenixAnalytics : NSObject {
    AXPhoenixConfiguration *_configuration;
    NSDateFormatter *_dateFormatter;
    NSString *_modelVersion;
    unsigned long long _assetVersion;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)_descriptionForEventType:(long long)a0;
- (void)_sendEvent:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 modelVersion:(id)a1 assetVersion:(unsigned long long)a2;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 context:(id)a2 completion:(id /* block */)a3;

@end
