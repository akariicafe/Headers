@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (BOOL)_hasVenueFeatureType;
- (int)referenceFrame;
- (int)_venueFeatureType;
- (BOOL)_hasResolvablePartialInformation;
- (id)initWithLabelMarker:(id)a0;
- (BOOL)_isTransitDisplayFeature;
- (id)_place;
- (void).cxx_destruct;
- (id)_identifier;
- (id)name;
- (id)_venueInfo;
- (id)_styleAttributes;
- (id)_labelMarker;
- (BOOL)_hasMUID;
- (BOOL)isValid;

@end
