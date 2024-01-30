@class NSRegularExpression, NSString;

@interface _IncrementalSearchOperation : NSOperation

@property (readonly) NSRegularExpression *regularExpression;
@property (readonly) NSString *searchBody;
@property (readonly) id /* block */ searchResultsBlock;
@property (readonly) id /* block */ searchFinishedBlock;

- (void).cxx_destruct;
- (void)main;
- (id)initWithSearchString:(id)a0 searchBody:(id)a1 resultsBlock:(id /* block */)a2 finishedBlock:(id /* block */)a3;

@end
