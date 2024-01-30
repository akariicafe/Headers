@class NSString, _UITextInteractableItem, UIAction, UIView;
@protocol _UITextContent;

@interface _UITextDataDetectedLinkInteractionHandler : NSObject <_UITextItemInteractionHandler> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    UIView<_UITextContent> *_view;
    _UITextInteractableItem *_item;
    UIAction *_defaultAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultActionWithContextMenuInteraction:(id)a0;
- (id)initWithItem:(id)a0 inTextContentView:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)preferredContextMenuLayout;
- (id)_defaultDDAction;
- (id)actionSheetTitle;
- (id)contextMenuConfiguration;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAtItemLocation;

@end
