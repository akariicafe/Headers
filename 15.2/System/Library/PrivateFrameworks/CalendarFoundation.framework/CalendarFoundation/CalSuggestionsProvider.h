@class NSObject;
@protocol SGSuggestionsServiceEventsProtocol;

@interface CalSuggestionsProvider : NSObject

@property (nonatomic) BOOL suggestionsFrameworkAvailable;
@property (retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service;

+ (id)defaultProvider;

- (void).cxx_destruct;
- (id)init;
- (void)_loadSuggestionsFramework;
- (id)sgEventFromUniqueID:(id)a0 error:(id *)a1;
- (void)confirmEventWithSuggestionID:(id)a0;
- (id)senderForEventWithSuggestionID:(id)a0;
- (id)sgRecordIDForEventWithSuggestionID:(id)a0 error:(id *)a1;
- (id)fakeSGRecordID;
- (void)confirmSGEventWithRecordID:(id)a0;
- (void)rejectSGEventWithRecordID:(id)a0;
- (BOOL)eventsFoundInMailEnabled;

@end
