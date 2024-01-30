@class NSNumber;

@interface NMSQuotaEvaluationState : NSObject

@property (retain, nonatomic) NSNumber *identifer;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long listTotalSize;
@property (nonatomic) unsigned long long listQuota;
@property (nonatomic) long long containerIndex;
@property (nonatomic) long long itemIndex;

- (void).cxx_destruct;

@end
