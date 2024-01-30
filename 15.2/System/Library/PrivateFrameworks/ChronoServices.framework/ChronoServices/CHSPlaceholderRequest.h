@class CHSWidgetMetrics, NSFileHandle;

@interface CHSPlaceholderRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) NSFileHandle *fileHandle;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMetrics:(id)a0 family:(long long)a1 fileHandle:(id)a2;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
