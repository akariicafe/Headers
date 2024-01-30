@class NSDate;

@interface WBSHistorySession : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL isCurrentSession;

+ (id)currentSession;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSessionStartDate:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
