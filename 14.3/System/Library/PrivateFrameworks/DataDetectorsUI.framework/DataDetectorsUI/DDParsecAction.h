@class DDParsecCollectionViewController;

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {
    DDParsecCollectionViewController *_parsecViewController;
    BOOL _previewMode;
}

- (void).cxx_destruct;
- (id)localizedName;
- (int)interactionType;
- (id)createViewController;
- (void)dismissParsecCollection:(id)a0;

@end
