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

- (void)purgeAllViews;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)enumerateRecycledViewsUsingBlock:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (void)purgeViewsForClass:(Class)a0;
- (id)viewOfClass:(Class)a0;
- (id)newViewOfClass:(Class)a0;
- (void)purgeView:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)addRecycledViewsOfClass:(Class)a0 upToCount:(unsigned long long)a1;
- (void)recycleView:(id)a0;
- (BOOL)isViewRecycled:(id)a0;
- (id)dequeueReusableViewOfClass:(Class)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
