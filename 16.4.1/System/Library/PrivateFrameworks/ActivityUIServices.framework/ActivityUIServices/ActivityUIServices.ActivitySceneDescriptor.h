@class NSString, NSData, _TtC18ActivityUIServices20ActivitySceneMetrics;

@interface ActivityUIServices.ActivitySceneDescriptor : NSObject {
    void /* unknown type, empty encoding */ activityIdentifier;
    void /* unknown type, empty encoding */ activityDescriptor;
    void /* unknown type, empty encoding */ payloadID;
}

@property (nonatomic, readonly) NSString *activityIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ activitySceneType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ activityDescriptorData;
@property (nonatomic, readonly) NSData *activityDescriptor;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ metricsRequest;
@property (nonatomic, readonly) NSString *payloadID;
@property (nonatomic, readonly) _TtC18ActivityUIServices20ActivitySceneMetrics *metrics;

- (id)init;
- (void).cxx_destruct;
- (id)initWithActivitySceneType:(long long)a0 activityDescriptor:(id)a1 metricsRequest:(id)a2 payloadID:(id)a3;

@end
