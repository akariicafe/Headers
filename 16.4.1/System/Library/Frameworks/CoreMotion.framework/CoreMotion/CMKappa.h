@interface CMKappa : NSObject

+ (BOOL)areStatsAvailable;

- (int)getState;
- (void)sendAPCmd:(int)a0 arg:(int)a1;

@end
