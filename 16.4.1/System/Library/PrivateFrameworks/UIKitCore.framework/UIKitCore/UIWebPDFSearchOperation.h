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

- (void)main;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (BOOL)_hitSearchLimit;
- (void)_search;
- (struct __CTFont { } *)_fontWithPDFFont:(struct CGPDFFont { } *)a0 size:(double)a1;
- (void)_notifyDelegateOfStatus;
- (id)sanitizedAttributedStringForAttributedString:(id)a0;

@end
