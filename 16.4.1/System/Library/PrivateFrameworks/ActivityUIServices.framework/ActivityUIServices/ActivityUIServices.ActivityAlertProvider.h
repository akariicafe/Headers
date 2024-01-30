@class NSString;

@interface ActivityUIServices.ActivityAlertProvider : NSObject <ActivityUIServices.ActivityAlertProviding> {
    void /* unknown type, empty encoding */ activityIdentifier;
    void /* unknown type, empty encoding */ alertAction;
    void /* unknown type, empty encoding */ alertConfiguration;
    void /* unknown type, empty encoding */ applicationBundleIdentifier;
    void /* unknown type, empty encoding */ payloadID;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *payloadIdentifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ configuration;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentationOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 payloadIdentifier:(id)a1 action:(long long)a2 presentationOptions:(id)a3 soundName:(id)a4 applicationBundleIdentifier:(id)a5;

@end
