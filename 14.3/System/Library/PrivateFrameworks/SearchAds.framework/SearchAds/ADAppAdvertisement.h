@class NSString, ADOdmlResponseV2, ADDataObject;

@interface ADAppAdvertisement : ADAppRepresentation <APOdmlRankable>

@property (retain, nonatomic) ADDataObject *adData;
@property (retain, nonatomic) NSString *instanceID;
@property (readonly, nonatomic) ADOdmlResponseV2 *odmlResponse;
@property (readonly, nonatomic) NSString *adamID;

- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0 assetInfo:(id)a1 adData:(id)a2 instanceID:(id)a3;
- (id)initWithAdamID:(id)a0 assetInfo:(id)a1 adData:(id)a2;

@end
