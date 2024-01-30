@class GEOMultiSectionFeature;

@interface GEOBuildingFootprintFeature : NSObject {
    void *_buildingFootprintFeature;
    GEOMultiSectionFeature *_multiSectionFeature;
}

- (void *)get;
- (id)feature;
- (void).cxx_destruct;
- (id)init:(void *)a0 withVectorTile:(id)a1;
- (unsigned long long)extrusionOffset;
- (unsigned long long)baseOffset;
- (BOOL)hasLandmark;
- (BOOL)isForTransit;

@end
