@class MKDistanceFormatter;
@protocol _MKPlaceItem;

@interface MUPlaceItemHeaderViewModel : MUPlaceHeaderViewModel {
    id<_MKPlaceItem> _placeItem;
    MKDistanceFormatter *_distanceFormatter;
}

@property (readonly, nonatomic) BOOL isUserSpecificPlaceItem;
@property (readonly, nonatomic) BOOL showNearbyStringForContactPlaceItem;

- (BOOL)hasInitialData;
- (BOOL)hasEnclosingPlace;
- (void).cxx_destruct;
- (id)initWithPlaceItem:(id)a0;
- (id)enclosingPlaceAttributedStringWithFont:(id)a0 labelColor:(id)a1 tokenColor:(id)a2;
- (id)placeSecondaryName;
- (id)transitLabelItems;
- (id)_userSpecificPlaceSecondaryName;
- (id)_formattedDistanceString;

@end
