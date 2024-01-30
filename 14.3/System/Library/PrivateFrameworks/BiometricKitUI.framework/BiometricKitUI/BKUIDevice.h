@interface BKUIDevice : NSObject {
    int _mainScreenClass;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)isN84;
- (BOOL)isN69;
- (BOOL)isD10;
- (BOOL)isD33;
- (BOOL)isMini;
- (BOOL)isPad6;
- (BOOL)isPad7;
- (BOOL)isIPad2;
- (BOOL)isZoomEnabled;
- (BOOL)isD32Sized;
- (BOOL)isiPad21;

@end
