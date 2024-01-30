@class NSString, ADOdmlResponseV2, ADDataObject;

@interface ADAppAdvertisement : ADAppRepresentation <APOdmlRankable>

@property (retain, nonatomic) ADDataObject *adData;
@property (retain, nonatomic) NSString *instanceID;
@property (retain, nonatomic) NSString *selectedCppID;
@property (readonly, nonatomic) ADOdmlResponseV2 *odmlResponse;
@property (readonly, nonatomic) NSString *adamID;

- (id)initWithAdamID:(id)a0 assetInfo:(id)a1 adData:(id)a2;
- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0 cppIDs:(id)a1 serverCppID:(id)a2 adData:(id)a3 instanceID:(id)a4;
- (id)initWithAdamID:(id)a0 assetInfo:(id)a1 adData:(id)a2 instanceID:(id)a3;

@end
