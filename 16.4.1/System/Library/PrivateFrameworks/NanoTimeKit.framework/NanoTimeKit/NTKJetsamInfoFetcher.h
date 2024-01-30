@interface NTKJetsamInfoFetcher : NSObject

- (BOOL)resetInterval;
- (BOOL)getInfo:(struct jetsam_info { long long x0; long long x1; long long x2; } *)a0;
- (void)dealloc;

@end
