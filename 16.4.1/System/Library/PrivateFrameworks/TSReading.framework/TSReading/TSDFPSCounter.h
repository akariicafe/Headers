@class NSMutableArray;

@interface TSDFPSCounter : NSObject {
    NSMutableArray *_dateArray;
}

- (void)dealloc;
- (id)init;
- (void)reset;
- (void)addFrame;
- (void)addFrameAtDrawTime:(double)a0;
- (void)addFrameAtDrawTime:(double)a0 duration:(double)a1;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)p_fpsSummaryStringIncludingGraph:(BOOL)a0;
- (id)p_getFPSInfo:(BOOL)a0;
- (void)writeFPSInfoToLog:(id)a0 identifier:(id)a1 type:(id)a2 direction:(id)a3 duration:(double)a4 graphing:(BOOL)a5 slide:(long long)a6;

@end
