@class NSString, NSNumber;

@interface ADInstallAttributionData : NSObject

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSNumber *sourceAppAdamID;
@property (readonly, copy, nonatomic) NSString *adNetworkID;
@property (readonly, copy, nonatomic) NSNumber *campaignID;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSNumber *adamID;
@property (readonly, copy, nonatomic) NSNumber *timestamp;
@property (readonly, copy, nonatomic) NSString *signature;

- (id)initWithDict:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)recordStoreKitAdTap:(id /* block */)a0;

@end
