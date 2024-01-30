@class NSString, NSURL, CLLocation, NSLocale;

@interface WFURLComponents : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL isLocalWeatherCity;
@property unsigned long long cityIndex;
@property (retain) NSLocale *locale;
@property (retain) NSString *platform;
@property unsigned long long destination;
@property (copy) CLLocation *location;
@property (copy) NSString *locationName;
@property BOOL showHourlyWeatherOnly;
@property (readonly, copy) NSURL *URL;

+ (id)componentsForURL:(id)a0;
+ (void)locationForURLComponents:(id)a0 completion:(id /* block */)a1;
+ (void)locationForURL:(id)a0 completion:(id /* block */)a1;
+ (id)componentsForLocation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_canBuildURLWithProvidedComponents;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToComponents:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
