@class NSString, NSXPCConnection;
@protocol ATXProactiveSuggestionClientModelXPCInterface;

@interface ATXProactiveSuggestionClientModel : NSObject <ATXProactiveSuggestionClientModelProtocol> {
    NSString *_clientModelId;
    NSString *_notificationId;
    id<ATXProactiveSuggestionClientModelXPCInterface> _suggestionReceiver;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, nonatomic) id<ATXProactiveSuggestionClientModelXPCInterface> suggestionReceiver;
@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)refreshBlendingLayer;
+ (long long)actionConversionTypeForClientModelType:(long long)a0;
+ (BOOL)clientModelTypeIsShortcutConversion:(long long)a0;
+ (id)clientModelIdFromClientModelType:(long long)a0;
+ (BOOL)clientModelTypeIsEligibleForShortcutConversion:(long long)a0;
+ (id)clientModelIdsFromClientModelTypesArray:(id)a0;
+ (long long)clientModelTypeFromClientModelId:(id)a0;

- (id)initWithClientModelId:(id)a0 notificationId:(id)a1 suggestionReceiver:(id)a2;
- (void)transmitNotificationIdToSuggestionReceiver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)retrieveAvailableCriterionIdentifiersWithReply:(id /* block */)a0;
- (void)updateSuggestions:(id)a0 feedbackMetadata:(id)a1;
- (void)setupRemoteClientXPCConnection;
- (void)updateSuggestions:(id)a0 feedbackMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateSuggestions:(id)a0 completionHandler:(id /* block */)a1;
- (void)transmitSuggestionsToReceiver:(id)a0 feedbackMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithClientModelId:(id)a0 notificationId:(id)a1;
- (void)retrieveCurrentSuggestionsWithReply:(id /* block */)a0;
- (void)updateSuggestions:(id)a0;
- (id)remoteAsyncSuggestionReceiver;

@end
