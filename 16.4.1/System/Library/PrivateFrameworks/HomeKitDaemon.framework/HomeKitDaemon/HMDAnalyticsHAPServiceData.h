@class NSString;

@interface HMDAnalyticsHAPServiceData : HMFObject

@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) BOOL isPrimary;
@property (readonly, nonatomic) BOOL ownerUser;

- (void).cxx_destruct;
- (id)initWithServiceType:(id)a0 isPrimary:(BOOL)a1 ownerUser:(BOOL)a2;

@end
