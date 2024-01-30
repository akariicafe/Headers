@class NSString;

@interface PGPictureInPictureApplication : NSObject

@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithProcessIdentifier:(int)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPGPictureInPictureApplication:(id)a0;

@end
