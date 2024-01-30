@class LogBloodPressureIntentResponse, LogBloodPressureIntent;

@interface SiriWellnessIntents.LogBloodPressureIntentHandler : NSObject <LogBloodPressureIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleLogBloodPressure:(LogBloodPressureIntent *)a0 completion:(void (^)(LogBloodPressureIntentResponse *))a1;

@end
