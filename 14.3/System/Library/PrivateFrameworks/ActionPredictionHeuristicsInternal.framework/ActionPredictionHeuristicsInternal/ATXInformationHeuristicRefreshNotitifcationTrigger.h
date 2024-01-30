@class NSString;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    BOOL _isDistributed;
    NSString *_notificationName;
    id _observerToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_stop;
- (void)_start;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNotification:(id)a0 distributed:(BOOL)a1;

@end
