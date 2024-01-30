@class NSString, SGEvent;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification {
    SGEvent *_suggestedEvent;
    NSString *_originAppName;
}

@property (readonly, nonatomic) NSString *originAppName;
@property (readonly, nonatomic) SGEvent *suggestedEvent;

+ (id)_queue;

- (void).cxx_destruct;
- (Class)_SGSuggestionsServiceClass;
- (void)updateSuggestedEventWithEventStore:(id)a0;

@end
