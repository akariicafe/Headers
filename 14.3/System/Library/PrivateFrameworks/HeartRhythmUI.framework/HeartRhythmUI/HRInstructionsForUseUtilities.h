@interface HRInstructionsForUseUtilities : NSObject

- (id)electrocardiogramInstructionsForUseHTMLURLForCountryCode:(id)a0;
- (id)electrocardiogramHelpControllerForAlgorithmVersion:(id)a0 countryCode:(id)a1;
- (id)instructionsForUseHTMLURLForCountryCode:(id)a0 globalFileName:(id)a1 fileMap:(id)a2;
- (id)_helpTopicIdForForAlgorithmVersion:(id)a0 algorithmVersionToHelpTopicIdMap:(id)a1;
- (id)_electrocardiogramHelpTopicIdForAlgorithmVersion:(id)a0 countryCode:(id)a1;
- (id)_helpControllerForFeatureIdentifier:(id)a0 algorithmVersion:(id)a1 countryCode:(id)a2 helpTopicId:(id)a3 regionIdentifierMap:(id)a4;
- (id)_atrialFibrillationHelpTopicIdForAlgorithmVersion:(id)a0 countryCode:(id)a1;
- (id)atrialFibrillationInstructionsForUseHTMLURLForCountryCode:(id)a0;
- (id)atrialFibrillationHelpControllerForAlgorithmVersion:(id)a0 countryCode:(id)a1;

@end
