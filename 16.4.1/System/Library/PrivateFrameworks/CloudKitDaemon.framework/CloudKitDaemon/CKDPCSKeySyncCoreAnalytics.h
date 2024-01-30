@class NSString, NSNumber, NSError;

@interface CKDPCSKeySyncCoreAnalytics : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSNumber *shouldThrottle;
@property (retain, nonatomic) NSNumber *isManatee;
@property (retain, nonatomic) NSString *keySyncResult;
@property (retain, nonatomic) NSString *overallResult;
@property (retain, nonatomic) NSNumber *keySyncDurationSec;
@property (retain, nonatomic) NSNumber *throttledDurationSec;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) NSNumber *KRSReturnedExistingIdentity;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
