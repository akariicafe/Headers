@class NSDictionary, CIContext;

@interface GIFBuilder : NSObject

@property (retain) CIContext *ciCtx;
@property (retain) NSDictionary *frameProperties;
@property struct CGImageDestination { } *imgDest;
@property double maxRes;

+ (id)builderWithContext:(id)a0 forURL:(id)a1 maxRes:(unsigned long long)a2 fps:(float)a3;

- (BOOL)finish;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)addImage:(id)a0;
- (id)initWithContext:(id)a0 forURL:(id)a1 maxRes:(unsigned long long)a2 fps:(float)a3;

@end
