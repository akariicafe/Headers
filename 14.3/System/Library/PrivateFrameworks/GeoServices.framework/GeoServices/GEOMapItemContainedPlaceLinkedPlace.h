@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (BOOL)_hasMUID;
- (BOOL)_hasResultProviderID;
- (BOOL)_hasResolvablePartialInformation;
- (int)referenceFrame;
- (unsigned long long)_muid;
- (id)_styleAttributes;
- (BOOL)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (void).cxx_destruct;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)_identifier;
- (id)initWithLinkedPlace:(id)a0;
- (BOOL)isValid;
- (id)description;
- (struct { double x0; double x1; })coordinate;
- (id)name;

@end
