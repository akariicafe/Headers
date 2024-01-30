@class ESDContainer, NSMutableDictionary, NSMutableArray;
@protocol OADColorPalette;

@interface OABReaderState : NSObject {
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    id<OADColorPalette> mColorPalette;
    NSMutableArray *mGroupStack;
}

@property (retain, nonatomic) ESDContainer *bstoreContainerHolder;

- (id)initWithClient:(Class)a0;
- (Class)client;
- (id)colorPalette;
- (void)setColorPalette:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)pushGroup:(id)a0;
- (id)xmlDrawingState;
- (id)contentObjectForId:(int)a0;
- (id)drawableForShapeId:(int)a0;
- (int)groupDepth;
- (id)groupStackReference;
- (BOOL)isInsideGroup;
- (id)peekGroup;
- (id)popGroup;
- (void)resetForNewDrawing;
- (void)setContentObject:(id)a0 forId:(int)a1;
- (void)setDrawable:(id)a0 forShapeId:(unsigned int)a1;
- (BOOL)useXmlBlobs;

@end
