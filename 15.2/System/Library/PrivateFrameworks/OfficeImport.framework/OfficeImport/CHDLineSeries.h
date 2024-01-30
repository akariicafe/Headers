@class NSString, CHDMarker;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {
    CHDMarker *mMarker;
    BOOL mSmooth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)marker;
- (id)initWithChart:(id)a0;
- (void)setMarker:(id)a0;
- (void)setSmooth:(BOOL)a0;
- (BOOL)isSmooth;

@end
