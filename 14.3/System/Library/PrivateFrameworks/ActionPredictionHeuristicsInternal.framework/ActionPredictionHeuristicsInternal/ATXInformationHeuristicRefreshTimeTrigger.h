@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface ATXInformationHeuristicRefreshTimeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    NSObject<OS_dispatch_source> *_source;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *fireDate;

- (void)_stop;
- (void)_start;
- (void).cxx_destruct;
- (id)initWithFireDate:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
