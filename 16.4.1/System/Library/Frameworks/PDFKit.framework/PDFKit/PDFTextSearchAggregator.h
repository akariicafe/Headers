@class NSString;
@protocol UITextSearchAggregator;

@interface PDFTextSearchAggregator : NSObject <PDFDocumentAsyncFindDelegate> {
    BOOL _isActive;
}

@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, nonatomic) id<UITextSearchAggregator> aggregator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)cancelFind;
- (void)foundResults:(id)a0 forDocument:(id)a1;
- (void)foundResults:(id)a0 forPage:(id)a1;
- (id)initWithSearchString:(id)a0 aggregator:(id)a1;

@end
