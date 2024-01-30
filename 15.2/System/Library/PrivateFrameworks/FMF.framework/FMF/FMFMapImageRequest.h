@class NSString, CLLocation;

@interface FMFMapImageRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) BOOL isShifted;
@property (nonatomic) double altitude;
@property (readonly, nonatomic) NSString *key;
@property (nonatomic) double pitch;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL cachingEnabled;
@property (nonatomic) long long priority;
@property (nonatomic) double radius;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 isShifted:(BOOL)a1 radius:(double)a2 width:(double)a3 height:(double)a4 andCachingEnabled:(BOOL)a5;
- (id)initWithLocation:(id)a0 isShifted:(BOOL)a1 altitude:(double)a2 pitch:(double)a3 width:(double)a4 height:(double)a5 andCachingEnabled:(BOOL)a6;
- (id)initWithLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 width:(double)a3 height:(double)a4 andCachingEnabled:(BOOL)a5;
- (id)initWithLocation:(id)a0 radius:(double)a1 width:(double)a2 height:(double)a3 andCachingEnabled:(BOOL)a4;

@end
