@class NSMutableArray;

@interface WBSSameDocumentNavigationToHistoryVisitCorrelator : NSObject {
    NSMutableArray *_visits;
}

- (id)init;
- (void).cxx_destruct;
- (id)visitForSameDocumentNavigationToURL:(id)a0;
- (void)noteVisit:(id)a0;

@end
