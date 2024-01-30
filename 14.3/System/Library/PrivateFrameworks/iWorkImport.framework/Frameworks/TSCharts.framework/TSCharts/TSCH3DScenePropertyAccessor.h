@class TSCH3DScene;

@interface TSCH3DScenePropertyAccessor : NSObject <TSCHUnretainedParent>

@property (readonly, nonatomic) TSCH3DScene *scene;

+ (id)accessorWithScene:(id)a0;

- (id)initWithScene:(id)a0;
- (void)dealloc;
- (void)clearParent;

@end
