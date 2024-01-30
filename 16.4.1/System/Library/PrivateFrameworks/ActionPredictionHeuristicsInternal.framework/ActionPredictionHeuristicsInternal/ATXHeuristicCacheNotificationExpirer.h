@class NSString;

@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSString *_notificationName;
    id _token;
    BOOL _isLocal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (void)_stop;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initLocal:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initDistributed:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
