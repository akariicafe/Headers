@class SFCapsuleCollectionView, SFCapsuleView, NSMutableDictionary;

@interface SFCapsuleCollectionViewItem : NSObject {
    NSMutableDictionary *_cachedContentSizesByState;
}

@property (nonatomic) long long animationCount;
@property (weak, nonatomic) SFCapsuleView *capsuleView;
@property (readonly, weak, nonatomic) SFCapsuleCollectionView *collectionView;
@property (nonatomic) BOOL capsuleIsDetached;
@property (nonatomic) BOOL capsuleContentIsValid;

- (double)capsuleHeightForWidth:(double)a0 defaultHeight:(double)a1 state:(long long)a2 index:(long long)a3;
- (id)initWithCollectionView:(id)a0;
- (void)invalidateCapsuleHeight;
- (void).cxx_destruct;

@end
