@class RadioStation, NSString;

@interface SKUIRadioStationEntityValueProvider : NSObject <IKEntityValueProviding>

@property (readonly, nonatomic) RadioStation *station;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStation:(id)a0;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1 destinationScale:(double)a2;
- (id)valueForEntityProperty:(id)a0;
- (id)valuesForEntityProperties:(id)a0;
- (id)rsep_stationName;
- (id)rsep_coreSeedName;
- (id)rsep_stationDescription;

@end
