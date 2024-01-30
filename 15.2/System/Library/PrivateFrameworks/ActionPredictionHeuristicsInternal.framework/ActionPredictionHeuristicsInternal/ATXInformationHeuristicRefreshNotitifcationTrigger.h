@class NSString;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    BOOL _isDistributed;
    NSString *_notificationName;
    id _observerToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (void)_stop;
- (id)initWithNotification:(id)a0 distributed:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
