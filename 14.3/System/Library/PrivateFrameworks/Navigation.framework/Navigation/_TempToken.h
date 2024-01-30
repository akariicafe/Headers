@class NSString, NSArray;
@protocol GEOTransitArtworkDataSource, GEOServerFormatTokenCountdownValue, GEOServerFormatTokenPriceValue;

@interface _TempToken : NSObject <GEOServerFormatToken>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int value1;
@property (nonatomic) unsigned int value2;
@property (retain, nonatomic) NSArray *value3s;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) float percentageValue;
@property (readonly, nonatomic) BOOL shouldScaleUnits;
@property (retain, nonatomic) id<GEOServerFormatTokenPriceValue> priceValue;
@property (retain, nonatomic) id<GEOTransitArtworkDataSource> artworkValue;
@property (retain, nonatomic) NSArray *timeStampValues;
@property (retain, nonatomic) id<GEOServerFormatTokenCountdownValue> countdownValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
