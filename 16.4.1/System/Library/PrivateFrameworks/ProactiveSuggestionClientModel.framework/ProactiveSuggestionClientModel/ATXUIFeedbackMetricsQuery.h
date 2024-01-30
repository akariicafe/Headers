@class NSDate;

@interface ATXUIFeedbackMetricsQuery : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long clientModelType;
@property (nonatomic) unsigned char consumerSubType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToATXUIFeedbackMetricsQuery:(id)a0;

@end
