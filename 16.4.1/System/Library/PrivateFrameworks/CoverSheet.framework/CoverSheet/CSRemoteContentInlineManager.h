@class NSString, CSAdjunctListItem, CSRemoteContentInlineViewController;
@protocol CSItemDestination, CSRemoteContentInlineProviding;

@interface CSRemoteContentInlineManager : NSObject <CSRemoteContentInlineProvidingManager> {
    id<CSItemDestination> _itemDestination;
    CSRemoteContentInlineViewController *_remoteInlineViewController;
    CSAdjunctListItem *_item;
    BOOL _inlineRemoteContentHidden;
}

@property (weak, nonatomic) id<CSRemoteContentInlineProviding> remoteContentInlineProvider;
@property (readonly, nonatomic) BOOL isInlineRemoteContentVisible;
@property (nonatomic, getter=isInlineRemoteContentHidden) BOOL inlineRemoteContentHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithItemDestination:(id)a0;
- (void).cxx_destruct;
- (void)_presentInlineRemoteContent:(id)a0 animatePresentation:(BOOL)a1 retryOnFailure:(BOOL)a2;
- (void)presentInlineRemoteContent:(id)a0 animatePresentation:(BOOL)a1;
- (void)removeInlineRemoteContentWithAnimatedDismissal:(BOOL)a0;

@end
