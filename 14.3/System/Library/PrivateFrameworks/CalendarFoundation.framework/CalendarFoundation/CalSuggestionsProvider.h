@class NSObject;
@protocol SGSuggestionsServiceEventsProtocol;

@interface CalSuggestionsProvider : NSObject

@property (nonatomic) BOOL suggestionsFrameworkAvailable;
@property (retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service;

+ (id)defaultProvider;

- (id)init;
- (void).cxx_destruct;
- (id)fakeSGRecordID;
- (void)_loadSuggestionsFramework;
- (id)sgEventFromUniqueID:(id)a0 error:(id *)a1;
- (void)confirmEventWithSuggestionID:(id)a0;
- (void)confirmSGEventWithRecordID:(id)a0;
- (id)senderForEventWithSuggestionID:(id)a0;
- (id)sgRecordIDForEventWithSuggestionID:(id)a0 error:(id *)a1;
- (void)rejectSGEventWithRecordID:(id)a0;
- (BOOL)eventsFoundInMailEnabled;

@end
