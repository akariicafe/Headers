@class NSString, OKPresentationCouchStep, NSMutableDictionary, NSMutableArray;

@interface OKPresentationCouch : OKPresentationCanvas {
    NSMutableDictionary *_internalSettings;
}

@property (readonly, copy, nonatomic) NSMutableArray *steps;
@property (copy, nonatomic) NSString *restartScript;
@property (retain, nonatomic) OKPresentationCouchStep *loopStep;

+ (id)couchWithName:(id)a0 settings:(id)a1 steps:(id)a2 restartScript:(id)a3;

- (id)dictionary;
- (double)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)addStep:(id)a0;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)a0;
- (id)closestStepForPageName:(id)a0;
- (id)initWithDictionary:(id)a0 andName:(id)a1 forPresentation:(id)a2;
- (id)lastStepForPageName:(id)a0;
- (id)nextStepAfterStep:(id)a0 canLoop:(BOOL)a1;

@end
