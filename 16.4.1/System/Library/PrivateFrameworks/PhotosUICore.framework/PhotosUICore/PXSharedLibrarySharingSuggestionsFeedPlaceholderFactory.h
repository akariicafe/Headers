@interface PXSharedLibrarySharingSuggestionsFeedPlaceholderFactory : NSObject <PXFeedPlaceholderFactory>

@property (readonly, nonatomic) BOOL supportsDynamicPlaceholderContentSize;

- (void)_handleDismissActionWithViewModel:(id)a0;
- (void)_handleIdentifyParticipantsActionWithViewModel:(id)a0;
- (id)createPlaceholderViewForFeedWithViewModel:(id)a0;

@end
