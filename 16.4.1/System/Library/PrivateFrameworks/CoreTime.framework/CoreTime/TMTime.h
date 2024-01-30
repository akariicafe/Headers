@class NSString;

@interface TMTime : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double rtc_s;
@property (nonatomic) double utc_s;
@property (nonatomic) long long rtc_ns;
@property (nonatomic) long long utc_ns;
@property (nonatomic) double utcUnc_s;
@property (nonatomic) double sf;
@property (nonatomic) double sfUnc;
@property (copy, nonatomic) NSString *source;
@property (nonatomic, getter=isSynthesized) BOOL synthesized;
@property (nonatomic) BOOL reliability;

+ (id)timeWithUtc_s:(double)a0 utcUnc_s:(double)a1 rtc_s:(double)a2 sf:(double)a3 source:(id)a4;
+ (id)timeWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)dictionary;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)propagatedTimeAtRTC:(double)a0;
- (void)dealloc;
- (id)init;
- (double)propagatedUncertaintyAtRTC:(double)a0;
- (id)description;
- (id)initWithUtc_ns:(long long)a0 utcUnc_s:(double)a1 rtc_ns:(long long)a2 sf:(double)a3 sfUnc:(double)a4 source:(id)a5;

@end
