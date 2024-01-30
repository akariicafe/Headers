@class NSString;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    BOOL _isDistributed;
    NSString *_notificationName;
    id _observerToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (void)_stop;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNotification:(id)a0 distributed:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
