@class NSString;

@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace>

@property (readonly, nonatomic) NSString *placeInterestType;
@property (readonly, nonatomic) double confidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPlaceOfInterestType:(id)a0 confidence:(double)a1;

@end
