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

- (id)link;
- (void).cxx_destruct;
- (id)_openURLAction:(id)a0;
- (id)initWithItem:(id)a0 inTextContentView:(id)a1;
- (id)_addLinkToReadingListAction:(id)a0;
- (id)_copyLinkAction:(id)a0;
- (id /* block */)_handlerRequiringUnlockedDevice:(id /* block */)a0;
- (id)_openAppLinkInDefaultBrowserAction:(id)a0;
- (id)_openAppLinkInExternalApplicationAction:(id)a0;
- (id)_shareLinkAction:(id)a0;
- (id)_titleForLink:(id)a0;
- (id)contextMenuConfiguration;
- (id)defaultActionWithContextMenuInteraction:(id)a0;

@end
