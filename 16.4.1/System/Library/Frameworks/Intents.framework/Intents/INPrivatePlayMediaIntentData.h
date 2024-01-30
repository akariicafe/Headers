@class NSString, NSArray, NSNumber, INPrivateMediaIntentData;

@interface INPrivatePlayMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) INPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, copy, nonatomic) NSNumber *appSelectionEnabled;
@property (readonly, copy, nonatomic) NSNumber *appInferred;
@property (readonly, copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, copy, nonatomic) NSNumber *appSelectionSignalsEnabled;
@property (readonly, copy, nonatomic) NSNumber *appSelectionSignalsFrequencyDenominator;
@property (readonly, copy, nonatomic) NSNumber *shouldSuppressCommonWholeHouseAudioRoutes;
@property (readonly, copy, nonatomic) NSNumber *immediatelyStartPlayback;
@property (readonly, copy, nonatomic) NSNumber *isAmbiguousPlay;
@property (readonly, copy, nonatomic) NSNumber *isPersonalizedRequest;
@property (readonly, copy, nonatomic) NSArray *internalSignals;
@property (readonly, copy, nonatomic) NSNumber *entityConfidenceSignalsEnabled;
@property (readonly, copy, nonatomic) NSNumber *entityConfidenceSignalsFrequencyDenominatorInternal;
@property (readonly, copy, nonatomic) NSNumber *entityConfidenceSignalsFrequencyDenominatorProd;
@property (readonly, copy, nonatomic) NSNumber *entityConfidenceSignalsMaxItemsToDisambiguate;
@property (readonly, copy, nonatomic) NSString *alternativeProviderBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *ampPAFDataSetID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)_intents_cacheableObjects;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_intents_updateContainerWithCache:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2 privateMediaIntentData:(id)a3;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2 privateMediaIntentData:(id)a3 appSelectionSignalsEnabled:(id)a4 appSelectionSignalsFrequencyDenominator:(id)a5 shouldSuppressCommonWholeHouseAudioRoutes:(id)a6;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2 privateMediaIntentData:(id)a3 appSelectionSignalsEnabled:(id)a4 appSelectionSignalsFrequencyDenominator:(id)a5 shouldSuppressCommonWholeHouseAudioRoutes:(id)a6 immediatelyStartPlayback:(id)a7;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2 privateMediaIntentData:(id)a3 appSelectionSignalsEnabled:(id)a4 appSelectionSignalsFrequencyDenominator:(id)a5 shouldSuppressCommonWholeHouseAudioRoutes:(id)a6 immediatelyStartPlayback:(id)a7 isAmbiguousPlay:(id)a8;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2 privateMediaIntentData:(id)a3 appSelectionSignalsEnabled:(id)a4 appSelectionSignalsFrequencyDenominator:(id)a5 shouldSuppressCommonWholeHouseAudioRoutes:(id)a6 immediatelyStartPlayback:(id)a7 isAmbiguousPlay:(id)a8 isPersonalizedRequest:(id)a9;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2 privateMediaIntentData:(id)a3 appSelectionSignalsEnabled:(id)a4 appSelectionSignalsFrequencyDenominator:(id)a5 shouldSuppressCommonWholeHouseAudioRoutes:(id)a6 immediatelyStartPlayback:(id)a7 isAmbiguousPlay:(id)a8 isPersonalizedRequest:(id)a9 internalSignals:(id)a10 entityConfidenceSignalsEnabled:(id)a11 entityConfidenceSignalsFrequencyDenominatorInternal:(id)a12 entityConfidenceSignalsFrequencyDenominatorProd:(id)a13 entityConfidenceSignalsMaxItemsToDisambiguate:(id)a14;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2 privateMediaIntentData:(id)a3 appSelectionSignalsEnabled:(id)a4 appSelectionSignalsFrequencyDenominator:(id)a5 shouldSuppressCommonWholeHouseAudioRoutes:(id)a6 immediatelyStartPlayback:(id)a7 isAmbiguousPlay:(id)a8 isPersonalizedRequest:(id)a9 internalSignals:(id)a10 entityConfidenceSignalsEnabled:(id)a11 entityConfidenceSignalsFrequencyDenominatorInternal:(id)a12 entityConfidenceSignalsFrequencyDenominatorProd:(id)a13 entityConfidenceSignalsMaxItemsToDisambiguate:(id)a14 alternativeProviderBundleIdentifier:(id)a15;
- (id)initWithAppSelectionEnabled:(id)a0 appInferred:(id)a1 audioSearchResults:(id)a2 privateMediaIntentData:(id)a3 appSelectionSignalsEnabled:(id)a4 appSelectionSignalsFrequencyDenominator:(id)a5 shouldSuppressCommonWholeHouseAudioRoutes:(id)a6 immediatelyStartPlayback:(id)a7 isAmbiguousPlay:(id)a8 isPersonalizedRequest:(id)a9 internalSignals:(id)a10 entityConfidenceSignalsEnabled:(id)a11 entityConfidenceSignalsFrequencyDenominatorInternal:(id)a12 entityConfidenceSignalsFrequencyDenominatorProd:(id)a13 entityConfidenceSignalsMaxItemsToDisambiguate:(id)a14 alternativeProviderBundleIdentifier:(id)a15 ampPAFDataSetID:(id)a16;

@end
