@class NSArray;

@interface PIParallaxColorAnalysis : NSObject

@property (class, readonly, nonatomic) long long currentVersion;

@property (nonatomic) long long version;
@property (nonatomic) double luminance;
@property (nonatomic) double foregroundLuminance;
@property (nonatomic) double backgroundLuminance;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *foregroundColors;
@property (copy, nonatomic) NSArray *backgroundColors;

+ (id)colorsFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)loadFromContentsDictionary:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)contentsDictionary;

@end
