@class GEOApplicationAuditToken;

@interface VKMapViewDescriptor : NSObject {
    long long _navViewMode;
}

@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) double contentScale;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) long long mapViewPurpose;
@property (nonatomic) unsigned char mapKitUsage;
@property (nonatomic) unsigned char mapsUsage;
@property (nonatomic) BOOL allowsAntialiasing;
@property (nonatomic) long long carDisplayType;

+ (id)descriptorWithShouldRasterize:(BOOL)a0 inBackground:(BOOL)a1 contentScale:(double)a2 auditToken:(id)a3 mapViewPurpose:(long long)a4 allowsAntialiasing:(BOOL)a5;

- (id)init;
- (void).cxx_destruct;

@end
