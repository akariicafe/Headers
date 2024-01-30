@class _UICollectionViewAnimationContext;
@protocol _UICollectionViewAnimationContext;

@interface _UICollectionViewAnimator : NSObject <NSCopying> {
    id<_UICollectionViewAnimationContext> _animationContext;
}

@property (readonly, nonatomic) id /* block */ handler;
@property (retain, nonatomic) _UICollectionViewAnimationContext *animationContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
