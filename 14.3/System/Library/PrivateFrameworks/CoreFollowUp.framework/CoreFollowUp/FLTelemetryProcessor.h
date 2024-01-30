@class NSObject;
@protocol FLTelemetryController;

@interface FLTelemetryProcessor : NSObject {
    NSObject<FLTelemetryController> *_telemetryController;
}

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)processItemRemoval:(id)a0;
- (void)processItemAddition:(id)a0;
- (void)processCurrentItems:(id)a0;

@end
