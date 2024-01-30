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

- (void)train;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void).cxx_destruct;
- (long long)classifierType;
- (id)classifyCandidateForAnchorOccurrence:(id)a0 trainingResult:(id)a1;
- (id)initWithCandidateId:(id)a0 candidateType:(id)a1 anchor:(id)a2;

@end
