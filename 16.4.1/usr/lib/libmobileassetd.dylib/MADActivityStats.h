@class NSString;

@interface MADActivityStats : NSObject

@property (nonatomic) unsigned long long successfulOperations;
@property (nonatomic) unsigned long long successWithIssues;
@property (retain, nonatomic) NSString *firstSuccessIssue;
@property (retain, nonatomic) NSString *lastSuccessIssue;
@property (nonatomic) unsigned long long totalWarnings;
@property (retain, nonatomic) NSString *firstWarningMethod;
@property (retain, nonatomic) NSString *firstWarningMessage;
@property (retain, nonatomic) NSString *lastWarningMethod;
@property (retain, nonatomic) NSString *lastWarningMessage;
@property (nonatomic) unsigned long long allocationFailures;
@property (nonatomic) unsigned long long associateReplyFailures;
@property (nonatomic) int failureResult;
@property (retain, nonatomic) NSString *failureResultName;
@property (retain, nonatomic) NSString *failureReason;
@property (nonatomic) unsigned long long additionalFailures;
@property (retain, nonatomic) NSString *firstAdditionalFailure;
@property (retain, nonatomic) NSString *lastAdditionalFailure;

- (id)init;
- (void).cxx_destruct;

@end
