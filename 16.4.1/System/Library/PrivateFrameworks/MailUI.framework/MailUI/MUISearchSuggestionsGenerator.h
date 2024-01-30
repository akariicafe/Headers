@class NSString, NSArray, _MUISearchSuggestionsOperation, NSObject, NSMutableArray;
@protocol OS_os_log, MUISearchSuggestionsGeneratorDelegate, OS_dispatch_queue;

@interface MUISearchSuggestionsGenerator : NSObject <EFLoggable> {
    id<MUISearchSuggestionsGeneratorDelegate> _delegate;
    NSArray *_suggesters;
    _MUISearchSuggestionsOperation *_pendingOperation;
    NSMutableArray *_cancelledOperations;
    NSMutableArray *_activeOperations;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithSuggesters:(id)a0 delegate:(id)a1;
- (id)startGeneratingSuggestionsUsingPhraseManager:(id)a0;
- (void)stopGeneratingSuggestionsWithIdentifier:(id)a0;

@end
