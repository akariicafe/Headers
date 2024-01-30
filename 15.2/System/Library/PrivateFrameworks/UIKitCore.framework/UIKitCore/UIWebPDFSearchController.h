@class UIPDFDocument, NSString, NSOperationQueue, NSMutableArray, NSObject;
@protocol UIWebPDFSearchControllerDelegate;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {
    unsigned long long _resultIndexWhenLimitHit;
    BOOL _notifiedThatSearchBegin;
    unsigned long long _pageIndexWhenLimitHit;
    NSOperationQueue *_searchQueue;
}

@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
@property (retain, nonatomic) UIPDFDocument *documentToSearch;
@property (nonatomic) double documentScale;
@property (nonatomic) unsigned long long startingPageIndex;
@property (nonatomic) unsigned long long resultLimit;
@property (readonly, nonatomic) BOOL searching;
@property (readonly, nonatomic) BOOL paused;

- (void)searchDidTimeOut:(id)a0;
- (void)searchDidBegin:(id)a0;
- (void)searchWasCancelled:(id)a0;
- (void)searchLimitHit:(id)a0;
- (void)searchDidFinish:(id)a0;
- (void)search:(id)a0 hasPartialResults:(id)a1;
- (id)init;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)cancel;
- (unsigned long long)_actualStartingPageIndex;
- (void)_clearSearchQueue;
- (void)search:(id)a0;

@end
