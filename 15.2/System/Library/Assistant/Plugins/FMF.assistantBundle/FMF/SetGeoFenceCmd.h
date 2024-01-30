@class NSString, SALocation, SAPerson;

@interface SetGeoFenceCmd : FMFBaseCmd

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL onetimeonly;
@property (copy, nonatomic) NSString *trigger;
@property (copy, nonatomic) SALocation *location;
@property (retain, nonatomic) SAPerson *saPerson;
@property (copy, nonatomic) NSString *fenceType;

+ (id)bundle;

- (id)jsonBodyDictionary;
- (id)addressString;
- (id)requestedLocationDictionary;
- (id)allHandles;
- (id)fullAddressDictionaryForSALocation:(id)a0;
- (id)postalAddressWithSALocation:(id)a0;
- (void).cxx_destruct;
- (id)path;
- (id)result;

@end
