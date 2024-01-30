@class NSString;

@interface SARDStartCorrectedServerRequest : SARDStartServerRequest

@property (copy, nonatomic) NSString *interactionIdToBeCorrected;
@property (copy, nonatomic) NSString *utteranceToBeCorrected;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
