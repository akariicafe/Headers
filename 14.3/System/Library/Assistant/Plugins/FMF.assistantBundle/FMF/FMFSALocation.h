@class UIImage, SAFmfLocation;

@interface FMFSALocation : FMFSABaseModel

@property (retain, nonatomic) UIImage *cachedFriendImage;
@property (retain, nonatomic) SAFmfLocation *siriLocation;

+ (id)bundle;
+ (id)locationWithHandle:(id)a0 saPerson:(id)a1 andDictionary:(id)a2;
+ (id)locationWithSiriLocation:(id)a0;

- (id)distanceCalculator;
- (id)formatPhoneNumber:(id)a0;
- (void).cxx_destruct;
- (id)numberFormatter;
- (id)friendName;
- (BOOL)isPhone;
- (BOOL)hasCoordinate;
- (id)distanceFromLocation:(id)a0;
- (id)unformatPhoneNumber:(id)a0;
- (void)decodeHandle:(id)a0 saPerson:(id)a1 withDictionary:(id)a2;
- (id)initWithSiriLocation:(id)a0;
- (id)initWithHandle:(id)a0 saPerson:(id)a1 andDictionary:(id)a2;
- (id)personForEmailFromContacts:(id)a0;
- (id)personForPhoneFromContacts:(id)a0;
- (id)friendHandlePretty;
- (id)friendEmail;
- (id)friendPhone;
- (id)friendHandle;
- (id)unformattedHandle;

@end
