@class NSTimer, UICollectionView;

@interface _UICollectionViewVerifier : NSObject {
    UICollectionView *_collectionView;
    NSTimer *_timer;
}

@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (void)prefsChanged:(id)a0;
- (void)dealloc;

@end
