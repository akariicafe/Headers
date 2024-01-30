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

+ (id)componentsForLocation:(id)a0;
+ (id)componentsForURL:(id)a0;
+ (void)locationForURL:(id)a0 completion:(id /* block */)a1;
+ (void)locationForURLComponents:(id)a0 completion:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToComponents:(id)a0;
- (BOOL)_canBuildURLWithProvidedComponents;

@end
