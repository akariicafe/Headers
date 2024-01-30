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
- (id)init;
- (BOOL)isViewRecycled:(id)a0;
- (id)viewOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)newViewOfClass:(Class)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)dequeueReusableViewOfClass:(Class)a0;
- (void)purgeAllViews;
- (void)addRecycledViewsOfClass:(Class)a0 upToCount:(unsigned long long)a1;
- (id)succinctDescriptionBuilder;
- (id)initWithDelegate:(id)a0;
- (void)enumerateRecycledViewsUsingBlock:(id /* block */)a0;
- (void)purgeViewsForClass:(Class)a0;
- (void)invalidate;

@end
