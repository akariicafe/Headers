@class NSArray, NSDate;

@interface TRITaskRunResult : NSObject <NSCopying>

@property (readonly, nonatomic) int runStatus;
@property (readonly, nonatomic) BOOL reportResultToServer;
@property (readonly, nonatomic) NSArray *nextTasks;
@property (readonly, nonatomic) NSDate *earliestRetryDate;

+ (id)resultWithRunStatus:(int)a0 reportResultToServer:(BOOL)a1 nextTasks:(id)a2 earliestRetryDate:(id)a3;

- (id)copyWithReplacementReportResultToServer:(BOOL)a0;
- (id)copyWithReplacementRunStatus:(int)a0;
- (id)copyWithReplacementNextTasks:(id)a0;
- (BOOL)isEqualToResult:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRunStatus:(int)a0 reportResultToServer:(BOOL)a1 nextTasks:(id)a2 earliestRetryDate:(id)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithReplacementEarliestRetryDate:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
