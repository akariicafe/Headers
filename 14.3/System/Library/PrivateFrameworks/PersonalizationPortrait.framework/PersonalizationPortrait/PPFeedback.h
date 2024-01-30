@interface PPFeedback : PPBaseFeedback

- (id)initWithExplicitlyEngagedStrings:(id)a0 explicitlyRejectedStrings:(id)a1 implicitlyEngagedStrings:(id)a2 implicitlyRejectedStrings:(id)a3 offeredStrings:(id)a4;
- (id)initWithExplicitlyEngagedString:(id)a0;
- (id)initWithExplicitlyRejectedString:(id)a0;
- (id)initWithImplicitlyEngagedString:(id)a0;
- (id)initWithImplicitlyRejectedString:(id)a0;
- (id)initWithOfferedString:(id)a0;
- (id)initWithExplicitlyEngagedStrings:(id)a0 implicitlyEngagedStrings:(id)a1 offeredStrings:(id)a2;
- (id)initWithExplicitlyEngagedStrings:(id)a0 explicitlyRejectedStrings:(id)a1 implicitlyEngagedStrings:(id)a2 implicitlyRejectedStrings:(id)a3;

@end
