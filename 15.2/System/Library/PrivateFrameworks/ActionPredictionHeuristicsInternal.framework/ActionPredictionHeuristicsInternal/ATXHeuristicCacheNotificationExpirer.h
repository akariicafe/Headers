@class NSString;

@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSString *_notificationName;
    id _token;
    BOOL _isLocal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (void)_stop;
- (id)initDistributed:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initLocal:(id)a0;
- (unsigned long long)hash;

@end
