@class NSCountedSet, NSString, NSDictionary, NSDate;

@interface _CPLPruneRequestCounter : NSObject {
    NSCountedSet *_successStatsPerResourceType;
    NSCountedSet *_failedStatsPerResourceType;
    unsigned long long _successSize;
    NSDate *_lastRequestDate;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *statusKey;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSDictionary *statusDictionary;

- (void).cxx_destruct;
- (void)noteRequestForResource:(id)a0 successful:(BOOL)a1 prunedSize:(unsigned long long)a2;
- (id)initWithTitle:(id)a0 statusKey:(id)a1;

@end
