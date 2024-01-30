@class NSString;
@protocol GEOTransitLine;

@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker> {
    id<GEOTransitLine> _line;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _locationHint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)artwork;
- (void).cxx_destruct;
- (id)labelText;
- (id)mapItemIdentifier;
- (id)initWithGEOTransitLine:(id)a0 locationHint:(struct CLLocationCoordinate2D { double x0; double x1; })a1;

@end
