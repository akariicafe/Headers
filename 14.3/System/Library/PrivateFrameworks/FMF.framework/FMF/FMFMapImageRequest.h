@class NSString, CLLocation;

@interface FMFMapImageRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) double altitude;
@property (readonly, nonatomic) NSString *key;
@property (nonatomic) double pitch;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL cachingEnabled;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 width:(double)a3 height:(double)a4 andCachingEnabled:(BOOL)a5;

@end
