@class DDParsecCollectionViewController;

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {
    DDParsecCollectionViewController *_parsecViewController;
    BOOL _previewMode;
}

+ (BOOL)isAvailable;

- (int)interactionType;
- (id)localizedName;
- (void).cxx_destruct;
- (id)createViewController;
- (void)interactionDidFinishAndRequiresDismissal:(BOOL)a0;

@end
