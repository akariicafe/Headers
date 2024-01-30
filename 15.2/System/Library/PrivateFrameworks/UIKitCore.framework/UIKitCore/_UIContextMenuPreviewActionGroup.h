@class UIViewController;

@interface _UIContextMenuPreviewActionGroup : _UIActionGroup

@property (retain, nonatomic) UIViewController *previewViewController;
@property (copy, nonatomic) id /* block */ previewHandler;

+ (id)groupWithChildren:(id)a0 previewViewController:(id)a1 previewHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
