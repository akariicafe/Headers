@class TSWPRep, NSString, NSObject;
@protocol TSDContainerInfo;

@interface TSWPShapeRep : TSDShapeRep <TSWPContainerTextEditingRep, TSWPShapeLayoutDelegate> {
    struct CGPoint { double x; double y; } _originalAutosizePositionOffset;
}

@property (readonly, nonatomic) TSWPRep *containedRep;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)childReps;
- (id)childRepsForHitTesting;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)updateChildrenFromLayout;
- (id)layoutsForChildReps;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reflectionFrameInRootForClipping;

@end
