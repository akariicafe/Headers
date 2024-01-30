@class NSString, SPQueryResultsQueue;

@interface SPQueryJob : NSObject

@property (nonatomic) struct __SIJobRef { } *siJob;
@property (retain, nonatomic) NSString *dataclass;
@property (weak, nonatomic) SPQueryResultsQueue *resultsQueue;
@property (copy, nonatomic) id /* block */ resultsHandler;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSIJob:(struct __SIJobRef { } *)a0 dataclass:(id)a1 eventHandler:(id /* block */)a2 resultsHandler:(id /* block */)a3;

@end
