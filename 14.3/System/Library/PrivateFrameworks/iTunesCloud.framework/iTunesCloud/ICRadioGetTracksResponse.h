@class NSArray, ICRadioStationMetadata, NSDate;

@interface ICRadioGetTracksResponse : ICRadioResponse

@property (readonly, nonatomic) ICRadioStationMetadata *stationMetadata;
@property (readonly, nonatomic) long long tracklistActionType;
@property (readonly, copy, nonatomic) NSArray *tracks;
@property (readonly, copy, nonatomic) NSDate *assetExpirationDate;

- (id)initWithResponseDictionary:(id)a0 expirationDate:(id)a1;
- (void).cxx_destruct;

@end
