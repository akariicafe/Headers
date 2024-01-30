@class NSString, NSDateInterval, ATXAnchorModelPredictionOffsetFromAnchorOccurrence, ATXDuetEvent;

@interface ATXAnchorModelPrediction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *anchorType;
@property (readonly, nonatomic) ATXDuetEvent *anchorEvent;
@property (readonly, nonatomic) NSString *candidateType;
@property (readonly, nonatomic) NSString *candidateId;
@property (readonly, nonatomic) NSDateInterval *dateIntervalForPrediction;
@property (readonly, nonatomic) ATXAnchorModelPredictionOffsetFromAnchorOccurrence *offsetFromAnchorToShowPrediction;
@property (readonly, nonatomic) double score;

- (id)init;
- (void).cxx_destruct;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAnchorType:(id)a0 anchorEvent:(id)a1 candidateType:(id)a2 candidateId:(id)a3 dateIntervalForPrediction:(id)a4 score:(double)a5 offsetFromAnchorToShowPrediction:(id)a6;

@end
