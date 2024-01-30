@class NSString;

@interface PGPictureInPictureApplication : NSObject <NSCopying>

@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithProcessIdentifier:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToPGPictureInPictureApplication:(id)a0;

@end
