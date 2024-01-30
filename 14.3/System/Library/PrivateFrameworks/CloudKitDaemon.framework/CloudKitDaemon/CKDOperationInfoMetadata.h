@class NSDate, NSNumber, CKOperationInfo;

@interface CKDOperationInfoMetadata : NSObject

@property (retain, nonatomic) CKOperationInfo *operationInfo;
@property (retain, nonatomic) NSDate *lastAttemptDate;
@property (retain, nonatomic) NSNumber *retryNumber;

- (void).cxx_destruct;

@end
