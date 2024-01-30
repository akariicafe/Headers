@interface ATXAnchorModelPredictionOffsetFromAnchorOccurrence : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startSecondsAfterAnchor;
@property (readonly, nonatomic) double endSecondsAfterAnchor;

- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithStartSecondsAfterAnchor:(double)a0 endSecondsAfterAnchor:(double)a1;

@end
