@class NSMutableArray, NSString, UIPDFDocument, NSObject;
@protocol UIWebPDFSearchOperationDelegate;

@interface UIWebPDFSearchOperation : NSOperation {
    NSMutableArray *_results;
    unsigned long long _totalResultsCount;
    BOOL _complete;
}

@property NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;
@property (readonly, nonatomic) unsigned long long currentPageResultCount;
@property (retain) UIPDFDocument *documentToSearch;
@property (readonly, nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) unsigned long long startingPageIndex;
@property (nonatomic) unsigned long long numberOfResultsToSkip;
@property (nonatomic) unsigned long long resultLimit;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) double documentScale;

- (void)cancel;
- (void)_search;
- (id)init;
- (void)dealloc;
- (void)main;
- (BOOL)_hitSearchLimit;
- (struct __CTFont { } *)_fontWithPDFFont:(struct CGPDFFont { } *)a0 size:(double)a1;
- (id)sanitizedAttributedStringForAttributedString:(id)a0;
- (void)_notifyDelegateOfStatus;

@end
