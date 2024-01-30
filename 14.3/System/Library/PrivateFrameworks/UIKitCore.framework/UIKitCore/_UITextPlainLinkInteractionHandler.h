@class NSString, UIView;
@protocol _UITextContent;

@interface _UITextPlainLinkInteractionHandler : NSObject <_UITextItemInteractionHandler> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    UIView<_UITextContent> *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_openAppLinkInExternalApplicationAction:(id)a0;
- (id)_openAppLinkInDefaultBrowserAction:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inTextContentView:(id)a2;
- (id)link;
- (id /* block */)_handlerRequiringUnlockedDevice:(id /* block */)a0;
- (id)defaultAction;
- (id)_titleForLink:(id)a0;
- (id)_openURLAction:(id)a0;
- (id)contextMenuConfiguration;
- (id)_addLinkToReadingListAction:(id)a0;
- (id)_copyLinkAction:(id)a0;
- (id)_shareLinkAction:(id)a0;

@end
