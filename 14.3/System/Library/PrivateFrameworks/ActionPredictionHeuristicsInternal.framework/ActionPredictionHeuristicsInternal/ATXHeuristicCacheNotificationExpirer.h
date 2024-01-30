@class NSString;

@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSString *_notificationName;
    id _token;
    BOOL _isLocal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_stop;
- (void)_start;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initDistributed:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initLocal:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
