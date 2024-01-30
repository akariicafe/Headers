@class PNRPhoneNumberResolver;

@interface TUGeoLocationMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) PNRPhoneNumberResolver *phoneNumberResolver;

- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (id)init;
- (id)locationForMetadataIdentifier:(id)a0;
- (void).cxx_destruct;

@end
