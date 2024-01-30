@class NSMutableArray;

@interface SGTopicDissectorGuardedData : NSObject {
    BOOL stop;
    NSMutableArray *topics;
    NSMutableArray *namedEntities;
    NSMutableArray *topicsExactMatchesInSourceText;
}

- (void).cxx_destruct;

@end
