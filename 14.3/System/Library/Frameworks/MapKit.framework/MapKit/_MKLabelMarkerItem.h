@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (id)_venueInfo;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasVenueFeatureType;
- (int)referenceFrame;
- (unsigned long long)_muid;
- (id)_styleAttributes;
- (id)_place;
- (void).cxx_destruct;
- (int)_venueFeatureType;
- (id)_identifier;
- (id)initWithLabelMarker:(id)a0;
- (id)_labelMarker;
- (BOOL)isValid;
- (struct { double x0; double x1; })coordinate;
- (id)name;
- (BOOL)_isTransitDisplayFeature;

@end
