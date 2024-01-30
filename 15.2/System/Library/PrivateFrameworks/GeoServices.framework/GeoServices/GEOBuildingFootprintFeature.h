@class GEOMultiSectionFeature;

@interface GEOBuildingFootprintFeature : NSObject {
    void *_buildingFootprintFeature;
    GEOMultiSectionFeature *_multiSectionFeature;
}

- (void *)get;
- (BOOL)hasLandmark;
- (id)init:(void *)a0 withVectorTile:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)baseOffset;
- (unsigned long long)extrusionOffset;
- (id)feature;
- (BOOL)isForTransit;

@end
