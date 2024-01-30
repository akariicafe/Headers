@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (BOOL)_hasResultProviderID;
- (unsigned long long)_muid;
- (id)_styleAttributes;
- (BOOL)_hasResolvablePartialInformation;
- (int)referenceFrame;
- (BOOL)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (BOOL)_hasMUID;
- (struct { double x0; double x1; })coordinate;
- (BOOL)isValid;
- (id)_identifier;
- (id)description;
- (BOOL)_isInLinkedPlaceRelationship;
- (void).cxx_destruct;
- (id)name;
- (id)initWithLinkedPlace:(id)a0;

@end
