@interface BKUIDevice : NSObject

@property (nonatomic) int mainScreenClass;
@property (nonatomic) BOOL isPad;

+ (id)sharedInstance;

- (BOOL)isZoomEnabled;
- (id)init;
- (BOOL)isIdiomPad;
- (BOOL)isIPad2;
- (BOOL)isD10;
- (BOOL)isD32Sized;
- (BOOL)isD33;
- (BOOL)isMini;
- (BOOL)isN69;
- (BOOL)isN84;
- (BOOL)isPad6;
- (BOOL)isPad7;
- (BOOL)isiPad21;

@end
