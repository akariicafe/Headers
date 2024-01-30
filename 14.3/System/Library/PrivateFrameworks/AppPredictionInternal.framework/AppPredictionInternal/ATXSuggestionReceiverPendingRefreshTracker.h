@class NSMutableSet;

@interface ATXSuggestionReceiverPendingRefreshTracker : NSObject

@property (retain, nonatomic) NSMutableSet *clientModelsThatUpdatedSuggestions;
@property (nonatomic) BOOL shouldForceRefreshForAllUIs;

- (id)init;
- (void).cxx_destruct;

@end
