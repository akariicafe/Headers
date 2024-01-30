@class NSString;

@interface PGPictureInPictureApplication : NSObject <NSCopying>

@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)a0;

- (id)initWithProcessIdentifier:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToPGPictureInPictureApplication:(id)a0;

@end
