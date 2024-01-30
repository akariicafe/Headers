@class NSString, NSURL;

@interface _DECLocationAppItem : _DECAppItem

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, copy, nonatomic) NSString *originatingBundleIdentifier;
@property (readonly, nonatomic) BOOL directionsSupported;

+ (BOOL)supportsSecureCoding;
+ (id)locationAppWithBundleIdentifier:(id)a0 name:(id)a1 shortName:(id)a2 launchURL:(id)a3 originatingBundleIdentifier:(id)a4 directionsSupported:(BOOL)a5 predictionSources:(long long)a6;
+ (id)locationAppWithBundleIdentifier:(id)a0 name:(id)a1 shortName:(id)a2 launchURL:(id)a3 originatingBundleIdentifier:(id)a4 directionsSupported:(BOOL)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 name:(id)a1 shortName:(id)a2 launchURL:(id)a3 originatingBundleIdentifier:(id)a4 directionsSupported:(BOOL)a5 predictionSources:(long long)a6;
- (BOOL)_isEqualToDECLocationAppItem:(id)a0;

@end
