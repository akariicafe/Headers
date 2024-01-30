@class SBIconListView;

@interface SBIconListRotationIconViewProvider : NSObject <SBIconViewProviding>

@property (readonly, weak, nonatomic) SBIconListView *listView;

- (BOOL)isIconViewRecycled:(id)a0;
- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithListView:(id)a0;
- (void)recycleIconView:(id)a0;

@end
