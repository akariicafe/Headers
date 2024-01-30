@class NSString, UIAction, UIView;
@protocol _UITextContent;

@interface _UITextDataDetectedLinkInteractionHandler : NSObject <_UITextItemInteractionHandler> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    UIView<_UITextContent> *_view;
    UIAction *_defaultAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inTextContentView:(id)a2;
- (id)defaultAction;
- (id)_defaultAction;
- (id)contextMenuConfiguration;
- (id)_defaultDDAction;
- (id)actionSheetTitle;
- (unsigned long long)preferredContextMenuLayout;

@end
