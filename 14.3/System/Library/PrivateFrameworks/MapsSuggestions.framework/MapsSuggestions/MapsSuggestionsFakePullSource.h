@class NSString, NSArray, NSSet, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsFakePullSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {
    struct ReadWriteQueue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _readwrite;
    NSArray *_entriesToPull;
    NSSet *_fakeCanProduceEntriesOfType;
    unsigned long long _calledStart;
    unsigned long long _calledUpdateSuggestionEntries;
    unsigned long long _calledStop;
    unsigned long long _calledUserRemove;
    unsigned long long _calledFeedbackForEntry;
    unsigned long long _calledfeedbackForMapItem;
    unsigned long long _calledfeedbackForContact;
    id /* block */ _handlerForFeedback;
    long long _lastUsedRemovalBehavior;
    unsigned long long _totalAdded;
}

@property (readonly, nonatomic) unsigned long long calledStart;
@property (readonly, nonatomic) unsigned long long calledUpdateSuggestionEntries;
@property (readonly, nonatomic) unsigned long long calledStop;
@property (readonly, nonatomic) unsigned long long calledUserRemove;
@property (readonly, nonatomic) unsigned long long calledFeedbackForEntry;
@property (readonly, nonatomic) unsigned long long calledfeedbackForMapItem;
@property (readonly, nonatomic) unsigned long long calledfeedbackForContact;
@property (readonly, nonatomic) unsigned long long totalAdded;
@property (readonly, nonatomic) long long lastUsedRemovalBehavior;
@property (nonatomic) double configureFrequency;
@property (nonatomic) BOOL configureSendCopies;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void).cxx_destruct;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)stop;
- (void)configureHandlerForFeedbackBlock:(id /* block */)a0;
- (void)configureCanProduceEntriesOfType:(id)a0;
- (void)pushEntries:(id)a0;
- (void)configurePullResponseEntries:(id)a0;
- (id).cxx_construct;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (void)start;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;

@end
