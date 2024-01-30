@class NSString, NSMutableDictionary, NSDictionary;

@interface DAResolvedRecipient : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long certificatesStatus;
@property (retain, nonatomic) NSMutableDictionary *mResolvedEmailToX509Certs;
@property (nonatomic) long long availabilityStatus;
@property (retain, nonatomic) NSString *mergedFreeBusy;
@property (readonly, nonatomic) NSDictionary *resolvedEmailToX509Certs;

- (void).cxx_destruct;
- (id)description;
- (void)addCert:(id)a0 forEmailAddress:(id)a1;

@end
