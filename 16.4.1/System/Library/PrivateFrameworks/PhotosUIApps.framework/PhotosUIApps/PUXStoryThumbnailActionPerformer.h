@interface PUXStoryThumbnailActionPerformer : NSObject <PXStoryThumbnailActionPerformer> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ presentPlayerAction;
    void /* unknown type, empty encoding */ exportHelper;
}

@property (nonatomic, copy) id /* block */ presentPlayerAction;

- (id)initWithModel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)presentShareSheet;
- (void)deleteMemory;
- (void)featureLess:(id)a0;
- (void)fileRadar;
- (void)presentTitleEditor;
- (void)setFavorite:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)showVisualDiagnostics;

@end
