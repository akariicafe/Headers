@class ATXAnchor, NSString;

@interface ATXNaivePositiveAnchorModelCandidateClassifier : NSObject <ATXAnchorModelCandidateClassifierProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXAnchor *anchor;
@property (readonly, nonatomic) NSString *candidateId;
@property (readonly, nonatomic) NSString *candidateType;
@property (nonatomic) BOOL isTrained;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (void)train;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)classifyCandidateForAnchorOccurrence:(id)a0 trainingResult:(id)a1;
- (long long)classifierType;
- (id)initWithCandidateId:(id)a0 candidateType:(id)a1 anchor:(id)a2;

@end
