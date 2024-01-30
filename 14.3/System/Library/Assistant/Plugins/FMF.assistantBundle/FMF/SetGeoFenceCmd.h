@class NSString, SALocation, SAPerson;

@interface SetGeoFenceCmd : FMFBaseCmd

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL onetimeonly;
@property (copy, nonatomic) NSString *trigger;
@property (copy, nonatomic) SALocation *location;
@property (retain, nonatomic) SAPerson *saPerson;
@property (copy, nonatomic) NSString *fenceType;

+ (id)bundle;

- (id)result;
- (id)path;
- (void).cxx_destruct;
- (id)addressString;
- (id)allHandles;
- (id)jsonBodyDictionary;
- (id)requestedLocationDictionary;
- (id)fullAddressDictionaryForSALocation:(id)a0;
- (id)postalAddressWithSALocation:(id)a0;

@end
