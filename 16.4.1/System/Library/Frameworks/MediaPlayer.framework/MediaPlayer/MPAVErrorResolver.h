@protocol MPAVErrorResolverDelegate;

@interface MPAVErrorResolver : NSObject

@property (weak, nonatomic) id<MPAVErrorResolverDelegate> delegate;

- (void).cxx_destruct;
- (void)resolveError:(id)a0;
- (void)sendDidResolveError:(id)a0 withResolution:(long long)a1;

@end
