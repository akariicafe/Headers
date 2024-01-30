@class NSMutableArray;

@interface ATXProtectedCorrelatedEventsData : NSObject {
    NSMutableArray *correlatedEvents;
    unsigned long long typeBEventDataReturnIndex;
    BOOL canUpdateReturnIndex;
    BOOL executedCorrelation;
}

- (void).cxx_destruct;

@end
