@class _INPBPrivateMediaIntentData, NSArray, NSString, _INPBString;

@interface _INPBPrivatePlayMediaIntentData : PBCodable <_INPBPrivatePlayMediaIntentData, NSSecureCoding, NSCopying> {
    struct { unsigned char appInferred : 1; unsigned char appSelectionEnabled : 1; unsigned char appSelectionSignalsEnabled : 1; unsigned char appSelectionSignalsFrequencyDenominator : 1; unsigned char entityConfidenceSignalsEnabled : 1; unsigned char entityConfidenceSignalsFrequencyDenominatorInternal : 1; unsigned char entityConfidenceSignalsFrequencyDenominatorProd : 1; unsigned char entityConfidenceSignalsMaxItemsToDisambiguate : 1; unsigned char immediatelyStartPlayback : 1; unsigned char isAmbiguousPlay : 1; unsigned char isPersonalizedRequest : 1; unsigned char shouldSuppressCommonWholeHouseAudioRoutes : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *alternativeProviderBundleIdentifier;
@property (readonly, nonatomic) BOOL hasAlternativeProviderBundleIdentifier;
@property (retain, nonatomic) _INPBString *ampPAFDataSetID;
@property (readonly, nonatomic) BOOL hasAmpPAFDataSetID;
@property (nonatomic) BOOL appInferred;
@property (nonatomic) BOOL hasAppInferred;
@property (nonatomic) BOOL appSelectionEnabled;
@property (nonatomic) BOOL hasAppSelectionEnabled;
@property (nonatomic) BOOL appSelectionSignalsEnabled;
@property (nonatomic) BOOL hasAppSelectionSignalsEnabled;
@property (nonatomic) int appSelectionSignalsFrequencyDenominator;
@property (nonatomic) BOOL hasAppSelectionSignalsFrequencyDenominator;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property (nonatomic) BOOL entityConfidenceSignalsEnabled;
@property (nonatomic) BOOL hasEntityConfidenceSignalsEnabled;
@property (nonatomic) int entityConfidenceSignalsFrequencyDenominatorInternal;
@property (nonatomic) BOOL hasEntityConfidenceSignalsFrequencyDenominatorInternal;
@property (nonatomic) int entityConfidenceSignalsFrequencyDenominatorProd;
@property (nonatomic) BOOL hasEntityConfidenceSignalsFrequencyDenominatorProd;
@property (nonatomic) int entityConfidenceSignalsMaxItemsToDisambiguate;
@property (nonatomic) BOOL hasEntityConfidenceSignalsMaxItemsToDisambiguate;
@property (nonatomic) BOOL immediatelyStartPlayback;
@property (nonatomic) BOOL hasImmediatelyStartPlayback;
@property (copy, nonatomic) NSArray *internalSignals;
@property (readonly, nonatomic) unsigned long long internalSignalsCount;
@property (nonatomic) BOOL isAmbiguousPlay;
@property (nonatomic) BOOL hasIsAmbiguousPlay;
@property (nonatomic) BOOL isPersonalizedRequest;
@property (nonatomic) BOOL hasIsPersonalizedRequest;
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, nonatomic) BOOL hasPrivateMediaIntentData;
@property (nonatomic) BOOL shouldSuppressCommonWholeHouseAudioRoutes;
@property (nonatomic) BOOL hasShouldSuppressCommonWholeHouseAudioRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)audioSearchResultsType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addAudioSearchResults:(id)a0;
- (void)addInternalSignal:(id)a0;
- (id)audioSearchResultsAtIndex:(unsigned long long)a0;
- (void)clearAudioSearchResults;
- (void)clearInternalSignals;
- (id)internalSignalAtIndex:(unsigned long long)a0;

@end
