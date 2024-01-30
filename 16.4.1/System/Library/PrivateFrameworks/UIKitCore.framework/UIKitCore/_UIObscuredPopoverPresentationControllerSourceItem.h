@class NSString;
@protocol _UIPopoverPresentationControllerSourceItem_Internal;

@interface _UIObscuredPopoverPresentationControllerSourceItem : NSObject <UIPopoverPresentationControllerSourceItem, _UIPopoverPresentationControllerSourceItem_Internal> {
    id<_UIPopoverPresentationControllerSourceItem_Internal> _sourceItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)obscuredSourceItemForItem:(id)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceRectForPresentationInWindow:(id)a0;
- (id)_sourceViewForPresentationInWindow:(id)a0;

@end
