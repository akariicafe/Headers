@interface ICUtilities : NSObject

@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL isInternetReachable;
@property (class, readonly, nonatomic) BOOL isSeedInstall;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 liesWithinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 assert:(BOOL)a2;

@end
