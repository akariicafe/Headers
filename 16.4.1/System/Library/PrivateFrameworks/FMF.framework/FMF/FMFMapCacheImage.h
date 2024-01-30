@class NSString, NSDate;

@interface FMFMapCacheImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long count;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSDate *timestamp;

- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)boostPriority;

@end
