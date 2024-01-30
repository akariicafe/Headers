@class NSString, NSArray, GEOGenericCombinations;
@protocol GEOServerFormatTokenPriceValue, GEOServerFormatTokenManeuverValue, GEOServerFormatTokenUrlValue, GEOTransitArtworkDataSource, GEOServerFormatTokenCountdownValue, GEOServerFormatTokenNumberData;

@interface _TempToken : NSObject <GEOServerFormatToken>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int value1;
@property (nonatomic) unsigned int value2;
@property (retain, nonatomic) NSArray *value3s;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) float percentageValue;
@property (readonly, nonatomic) BOOL shouldScaleUnits;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) id<GEOServerFormatTokenPriceValue> priceValue;
@property (retain, nonatomic) id<GEOTransitArtworkDataSource> artworkValue;
@property (retain, nonatomic) NSArray *timeStampValues;
@property (retain, nonatomic) id<GEOServerFormatTokenCountdownValue> countdownValue;
@property (retain, nonatomic) id<GEOServerFormatTokenUrlValue> urlValue;
@property (retain, nonatomic) id<GEOServerFormatTokenManeuverValue> maneuverValue;
@property (retain, nonatomic) id<GEOServerFormatTokenNumberData> numberData;
@property (retain, nonatomic) GEOGenericCombinations *genericCombinations;
@property (nonatomic) int waypointIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
