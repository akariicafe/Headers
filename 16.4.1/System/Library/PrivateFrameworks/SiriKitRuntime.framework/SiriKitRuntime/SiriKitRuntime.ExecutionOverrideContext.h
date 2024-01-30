@class NSString;

@interface SiriKitRuntime.ExecutionOverrideContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ activeTasks;
    void /* unknown type, empty encoding */ executedTasks;
    void /* unknown type, empty encoding */ isTriggerlessFollowup;
    void /* unknown type, empty encoding */ isMitigated;
    void /* unknown type, empty encoding */ endpointMode;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
