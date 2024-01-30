@class NSMutableArray;

@interface WBSSameDocumentNavigationToHistoryVisitCorrelator : NSObject {
    NSMutableArray *_visits;
}

- (id)visitForSameDocumentNavigationToURL:(id)a0;
- (void).cxx_destruct;
- (void)noteVisit:(id)a0;
- (id)init;

@end
