@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, AFUtteranceSuggestionsDelegate;

@interface AFUtteranceSuggestions : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedUtterances;
}

@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, weak, nonatomic) id<AFUtteranceSuggestionsDelegate> delegate;

- (void).cxx_destruct;
- (id)_suggestionsFilePath;
- (void)getSuggestedUtterancesWithCompletion:(id /* block */)a0;
- (id)initWithLanguageCode:(id)a0 delegate:(id)a1;
- (void)setSuggestedUtterances:(id)a0;

@end
