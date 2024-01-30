@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequestMO : DRSSubmitLogRequestMO

@property (copy, nonatomic) NSNumber *cfDidSucceed;
@property (copy, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (id)fetchRequest;

@end
