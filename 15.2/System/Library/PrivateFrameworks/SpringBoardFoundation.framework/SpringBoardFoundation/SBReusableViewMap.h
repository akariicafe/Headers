@class NSString, NSMapTable;
@protocol SBReusableViewMapDelegate;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding> {
    NSMapTable *_recycledViewsByClass;
    BOOL _invalidated;
}

@property (weak, nonatomic) id<SBReusableViewMapDelegate> delegate;
@property (readonly, nonatomic) unsigned long long recycledViewCount;
@property (readonly, nonatomic) unsigned long long viewRecyclingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recycleView:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)purgeViewsForClass:(Class)a0;
- (id)viewOfClass:(Class)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)purgeAllViews;
- (id)dequeueReusableViewOfClass:(Class)a0;
- (id)succinctDescription;
- (void)purgeView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addRecycledViewsOfClass:(Class)a0 upToCount:(unsigned long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)dealloc;
- (void)enumerateRecycledViewsUsingBlock:(id /* block */)a0;
- (id)newViewOfClass:(Class)a0;
- (BOOL)isViewRecycled:(id)a0;

@end
