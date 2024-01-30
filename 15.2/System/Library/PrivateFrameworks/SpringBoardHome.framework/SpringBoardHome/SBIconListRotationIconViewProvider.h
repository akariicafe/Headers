@class SBIconListView;

@interface SBIconListRotationIconViewProvider : NSObject <SBIconViewProviding>

@property (readonly, weak, nonatomic) SBIconListView *listView;

- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (BOOL)isIconViewRecycled:(id)a0;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)recycleIconView:(id)a0;
- (id)initWithListView:(id)a0;

@end
