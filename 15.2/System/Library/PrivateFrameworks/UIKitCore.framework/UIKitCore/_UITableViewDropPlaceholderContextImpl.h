@class NSString, NSUUID, UIDragItem;
@protocol _UITableViewPlaceholderContextDelegate, UIDragAnimating;

@interface _UITableViewDropPlaceholderContextImpl : NSObject <_UITableViewPlaceholderContext>

@property (weak, nonatomic) id<_UITableViewPlaceholderContextDelegate> delegate;
@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) double rowHeight;
@property (copy, nonatomic) id /* block */ cellUpdateHandler;
@property (retain, nonatomic, getter=_animator, setter=_setAnimator:) id<UIDragAnimating> animator;
@property (retain, nonatomic, getter=_shadowUpdateIdentifier, setter=_setShadowUpdateIdentifier:) NSUUID *shadowUpdateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAnimations:(id /* block */)a0;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 dragItem:(id)a1 reuseIdentifier:(id)a2 rowHeight:(double)a3 cellUpdateHandler:(id /* block */)a4;
- (BOOL)deletePlaceholder;
- (BOOL)commitInsertionWithDataSourceUpdates:(id /* block */)a0;

@end
