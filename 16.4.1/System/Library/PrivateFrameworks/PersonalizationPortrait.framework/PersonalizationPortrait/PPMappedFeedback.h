@interface PPMappedFeedback : PPBaseFeedback

- (id)initWithExplicitlyEngagedString:(id)a0 mappingId:(id)a1;
- (id)initWithExplicitlyEngagedStrings:(id)a0 explicitlyRejectedStrings:(id)a1 implicitlyEngagedStrings:(id)a2 implicitlyRejectedStrings:(id)a3 mappingId:(id)a4;
- (id)initWithImplicitlyEngagedString:(id)a0 mappingId:(id)a1;
- (id)initWithOfferedString:(id)a0 mappingId:(id)a1;
- (id)initWithExplicitlyEngagedStrings:(id)a0 implicitlyEngagedStrings:(id)a1 offeredStrings:(id)a2 mappingId:(id)a3;
- (id)initWithImplicitlyRejectedString:(id)a0 mappingId:(id)a1;
- (id)initWithExplicitlyRejectedString:(id)a0 mappingId:(id)a1;
- (id)initWithExplicitlyEngagedStrings:(id)a0 explicitlyRejectedStrings:(id)a1 implicitlyEngagedStrings:(id)a2 implicitlyRejectedStrings:(id)a3 offeredStrings:(id)a4 mappingId:(id)a5;

@end
