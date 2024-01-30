@interface CloudSharingUI.SharingOptionsViewFactory : NSObject

+ (id)createCollaborationShareOptionsView:(id)a0 layoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 userDidChangeOption:(id /* block */)a2 contentSizeDidChange:(id /* block */)a3;
+ (id)createSharingOptionsView:(id)a0 userDidChangeOption:(id /* block */)a1;

- (id)init;

@end
