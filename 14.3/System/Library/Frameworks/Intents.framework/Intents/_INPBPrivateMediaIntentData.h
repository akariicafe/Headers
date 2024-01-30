@class NSString, _INPBSpeakerIDInfo, _INPBString, _INPBAppIdentifier, _INPBWholeHouseAudioMetadata;

@interface _INPBPrivateMediaIntentData : PBCodable <_INPBPrivateMediaIntentData, NSSecureCoding, NSCopying> {
    struct { unsigned char asrConfidenceLevel : 1; unsigned char asrConfidenceScore : 1; unsigned char isAppAttributionRequired : 1; unsigned char isAppCorrection : 1; unsigned char nlConfidenceLevel : 1; unsigned char nlConfidenceScore : 1; unsigned char useDialogMemoryForAttribution : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int asrConfidenceLevel;
@property (nonatomic) BOOL hasAsrConfidenceLevel;
@property (nonatomic) float asrConfidenceScore;
@property (nonatomic) BOOL hasAsrConfidenceScore;
@property (retain, nonatomic) _INPBString *fallbackUsername;
@property (readonly, nonatomic) BOOL hasFallbackUsername;
@property (nonatomic) BOOL isAppAttributionRequired;
@property (nonatomic) BOOL hasIsAppAttributionRequired;
@property (nonatomic) BOOL isAppCorrection;
@property (nonatomic) BOOL hasIsAppCorrection;
@property (nonatomic) int nlConfidenceLevel;
@property (nonatomic) BOOL hasNlConfidenceLevel;
@property (nonatomic) float nlConfidenceScore;
@property (nonatomic) BOOL hasNlConfidenceScore;
@property (retain, nonatomic) _INPBAppIdentifier *proxiedThirdPartyAppInfo;
@property (readonly, nonatomic) BOOL hasProxiedThirdPartyAppInfo;
@property (retain, nonatomic) _INPBString *resolvedSharedUserID;
@property (readonly, nonatomic) BOOL hasResolvedSharedUserID;
@property (retain, nonatomic) _INPBSpeakerIDInfo *speakerIDInfo;
@property (readonly, nonatomic) BOOL hasSpeakerIDInfo;
@property (nonatomic) BOOL useDialogMemoryForAttribution;
@property (nonatomic) BOOL hasUseDialogMemoryForAttribution;
@property (retain, nonatomic) _INPBWholeHouseAudioMetadata *wholeHouseAudioMetadata;
@property (readonly, nonatomic) BOOL hasWholeHouseAudioMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asrConfidenceLevelAsString:(int)a0;
- (int)StringAsAsrConfidenceLevel:(id)a0;
- (id)nlConfidenceLevelAsString:(int)a0;
- (int)StringAsNlConfidenceLevel:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
