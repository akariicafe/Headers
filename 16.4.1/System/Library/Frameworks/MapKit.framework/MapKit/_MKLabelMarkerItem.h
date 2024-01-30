@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (unsigned long long)_muid;
- (id)_styleAttributes;
- (BOOL)_hasResolvablePartialInformation;
- (int)referenceFrame;
- (id)_place;
- (BOOL)_hasMUID;
- (struct { double x0; double x1; })coordinate;
- (BOOL)isValid;
- (id)_identifier;
- (BOOL)_hasVenueFeatureType;
- (id)_venueInfo;
- (int)_venueFeatureType;
- (void).cxx_destruct;
- (BOOL)_isTransitDisplayFeature;
- (id)name;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
