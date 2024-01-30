@class NSString, NSDictionary, NSDate, AMSProcessInfo;

@interface AMSSnapshotBagBuilder : NSObject

@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) AMSProcessInfo *processInfo;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;

- (void).cxx_destruct;
- (id)buildWithError:(id *)a0;

@end
