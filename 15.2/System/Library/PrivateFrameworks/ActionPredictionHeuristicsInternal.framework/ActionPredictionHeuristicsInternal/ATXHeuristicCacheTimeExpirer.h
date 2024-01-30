@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface ATXHeuristicCacheTimeExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSObject<OS_dispatch_source> *_source;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *fireDate;

- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (void)_stop;
- (id)initWithFireDate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
