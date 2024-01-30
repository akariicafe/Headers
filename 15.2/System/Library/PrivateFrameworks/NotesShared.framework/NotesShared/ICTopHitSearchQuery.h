@class CSTopHitSearchQuery, NSString, NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface ICTopHitSearchQuery : NSObject

@property (retain, nonatomic) CSTopHitSearchQuery *query;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore;
@property (nonatomic) BOOL wasForceStopped;
@property (retain, nonatomic) NSArray *queryResults;
@property (readonly, nonatomic) NSString *highlightString;
@property (readonly, nonatomic) BOOL modernResultsOnly;

- (BOOL)run:(id *)a0;
- (void)setup;
- (void)forceStop;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQueryString:(id)a0 keyboardLanguage:(id)a1 modernResultsOnly:(BOOL)a2;

@end
