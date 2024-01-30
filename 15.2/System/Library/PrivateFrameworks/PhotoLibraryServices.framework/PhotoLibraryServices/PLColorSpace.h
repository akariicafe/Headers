@class NSString;

@interface PLColorSpace : NSObject

@property (copy, nonatomic) NSString *colorSpaceName;

+ (id)colorSpaceFromName:(id)a0;
+ (id)commonColorSpace_unspecified;
+ (id)commonColorSpace_displaySpace;
+ (id)commonColorSpace_sRGB;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;

@end
