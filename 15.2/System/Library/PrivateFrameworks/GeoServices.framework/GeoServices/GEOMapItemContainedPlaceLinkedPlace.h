@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (int)referenceFrame;
- (BOOL)_hasResolvablePartialInformation;
- (id)description;
- (void).cxx_destruct;
- (id)_identifier;
- (id)initWithLinkedPlace:(id)a0;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)name;
- (BOOL)_hasResultProviderID;
- (id)_styleAttributes;
- (int)_resultProviderID;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasMUID;
- (BOOL)isValid;

@end
