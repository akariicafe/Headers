@class TSCH3DSceneObject;

@interface TSCH3DChartStageSceneObject : TSCH3DSceneObject {
    TSCH3DSceneObject *mMain;
}

+ (id)objectWithMain:(id)a0;

- (void)dealloc;
- (void)render:(id)a0;
- (void)getBounds:(id)a0;
- (void)postGetBounds:(id)a0;
- (void)rayPick:(id)a0;
- (void)postrender:(id)a0;
- (void)getSelectionKnobsPositions:(id)a0;
- (void)getSceneObjectElementsBounds:(id)a0;
- (void)prerender:(id)a0;
- (id)initWithMain:(id)a0;
- (void)render:(id)a0 selector:(SEL)a1;

@end
