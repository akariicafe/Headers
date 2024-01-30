@class NSURL, NSString;

@interface AAUIAccountRecoveryManagementContext : NSObject

@property (nonatomic) BOOL recoveryKeyEligible;
@property (nonatomic) BOOL recoveryKeyIsOn;
@property (retain, nonatomic) NSURL *recoveryKeyURL;
@property (copy, nonatomic) NSString *recoveryKeyHTTPMethod;
@property (nonatomic) BOOL icloudDataRecoveryShouldShowRow;
@property (retain, nonatomic) NSURL *icloudDataRecoveryDetailsURL;
@property (copy, nonatomic) NSString *icloudDataRecoveryDetailsHTTPMethod;
@property (copy, nonatomic) NSString *icloudDataRecoveryRowLabel;
@property (retain, nonatomic) NSURL *learnMoreURL;

- (id)description;
- (void).cxx_destruct;

@end
