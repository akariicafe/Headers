@class NSString, NSData, CLPlacemark;

@interface ICLocation : NSManagedObject

@property (nonatomic) BOOL updatingPlace;
@property (readonly, nonatomic) NSString *formattedAddress;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSData *placemarkData;
@property (retain, nonatomic) CLPlacemark *placemark;

+ (id)searchStringsForPlacemark:(id)a0;

- (id)searchStrings;
- (void).cxx_destruct;
- (void)didTurnIntoFault;
- (void)setLocationFromPlacemark:(id)a0;
- (void)setLocationFromURL:(id)a0;

@end
