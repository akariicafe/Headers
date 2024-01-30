@class NSMutableSet, NSMutableDictionary;

@interface ATXSuggestionReceiverPendingRefreshTracker : NSObject

@property (retain, nonatomic) NSMutableSet *clientModelsThatUpdatedSuggestions;
@property (nonatomic) BOOL shouldForceRefreshForAllUIs;
@property (retain, nonatomic) NSMutableDictionary *registeredDelegatesForClientModels;
@property (retain, nonatomic) NSMutableDictionary *requestUUIDToClientModelCaches;

- (void).cxx_destruct;
- (id)init;

@end
