@interface PUPhotoEditLayoutSupport : NSObject

+ (void)transitionFromBarView:(id)a0 orientation:(long long)a1 toBarView:(id)a2 orientation:(long long)a3 coordinator:(id)a4 completionHandler:(id /* block */)a5;
+ (id)layoutConstraintsForHidingView:(id)a0 layoutOrientation:(long long)a1;
+ (id)layoutConstraintsForHidingSecondaryView:(id)a0 layoutOrientation:(long long)a1;

@end
