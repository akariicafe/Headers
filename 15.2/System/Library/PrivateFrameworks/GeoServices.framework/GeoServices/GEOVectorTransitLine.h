@class GEOFeature;

@interface GEOVectorTransitLine : NSObject {
    void *_vectorTransitLine;
    GEOFeature *_feature;
}

@property (readonly, nonatomic) GEOFeature *feature;
@property (readonly, nonatomic) struct GeoCodecsRGBAColor8 { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *color;
@property (readonly, nonatomic) unsigned int systemIndex;
@property (readonly, nonatomic) float minZoom;
@property (readonly, nonatomic) unsigned int subtitleOffset;
@property (readonly, nonatomic) unsigned int cartoId;
@property (readonly, nonatomic) unsigned int order;

- (void *)get;
- (id)init:(void *)a0 withVectorTile:(id)a1;
- (void).cxx_destruct;

@end
