@class NSArray, UIImage, MKMapItem;

@interface MKPlaceAmenitiesProvider : NSObject {
    MKMapItem *_mapItem;
    NSArray *_amenityItems;
}

@property (readonly, copy, nonatomic) NSArray *inlineAmenityList;
@property (readonly, nonatomic) UIImage *imageForApplePay;

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (void)_createAmenityItems;
- (id)_stringForAmenity:(int)a0;
- (void)refreshWithFont:(id)a0 textColor:(id)a1;

@end
