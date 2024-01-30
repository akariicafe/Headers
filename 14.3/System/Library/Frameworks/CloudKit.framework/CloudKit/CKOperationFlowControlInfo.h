@class NSError, NSDate;

@interface CKOperationFlowControlInfo : NSObject

@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSDate *flowControlEndDate;

+ (id)flowControlInfoWithEndDate:(id)a0 error:(id)a1;

- (void).cxx_destruct;

@end
