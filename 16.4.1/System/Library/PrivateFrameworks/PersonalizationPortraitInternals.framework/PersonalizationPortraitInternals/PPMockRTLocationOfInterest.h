@class PPMockRTMapItem, NSArray;

@interface PPMockRTLocationOfInterest : NSObject

@property (retain, nonatomic) PPMockRTMapItem *mapItem;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSArray *visits;

+ (id)mockLocationOfInterestWithSubThoroughfare:(id)a0 thoroughfare:(id)a1 subLocality:(id)a2 locality:(id)a3 administrativeArea:(id)a4 administrativeAreaCode:(id)a5 postalCode:(id)a6 country:(id)a7 countryCode:(id)a8 longitude:(double)a9 latitude:(double)a10 visits:(id)a11;

- (void).cxx_destruct;

@end
