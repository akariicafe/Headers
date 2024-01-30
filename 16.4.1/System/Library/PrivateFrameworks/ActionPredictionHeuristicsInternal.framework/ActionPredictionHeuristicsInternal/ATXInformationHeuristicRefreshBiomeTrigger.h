@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXInformationHeuristicRefreshBiomeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _streamType;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (void)_stop;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStreamType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)_publisher;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToATXInformationHeuristicRefreshBiomeTrigger:(id)a0;
- (void).cxx_destruct;

@end
