@interface BKUIDevice : NSObject

@property (nonatomic) int mainScreenClass;
@property (nonatomic) BOOL isPad;

+ (id)sharedInstance;

- (BOOL)isZoomEnabled;
- (BOOL)isN84;
- (BOOL)isN69;
- (BOOL)isD10;
- (BOOL)isD33;
- (id)init;
- (BOOL)isIPad2;
- (BOOL)isMini;
- (BOOL)isPad6;
- (BOOL)isPad7;
- (BOOL)isIdiomPad;
- (BOOL)isD32Sized;
- (BOOL)isiPad21;

@end
