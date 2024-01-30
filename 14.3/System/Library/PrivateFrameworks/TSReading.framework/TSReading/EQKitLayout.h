@class NSString, EQKitBox, EQKitEnvironmentInstance;
@protocol EQKitRootNode;

@interface EQKitLayout : NSObject <EQKitLayout> {
    id<EQKitRootNode> mRoot;
    double mAscent;
    double mDescent;
    double mLeading;
    double mNaturalAlignmentOffset;
    double mScale;
    BOOL mSingleLineHeight;
    EQKitEnvironmentInstance *mEnvironment;
}

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)depth;
- (double)width;
- (id)init;
- (void)dealloc;
- (double)vsize;
- (BOOL)layoutWithContext:(id)a0;
- (double)height;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithRoot:(id)a0 environment:(id)a1;
- (double)naturalAlignmentOffset;

@end
