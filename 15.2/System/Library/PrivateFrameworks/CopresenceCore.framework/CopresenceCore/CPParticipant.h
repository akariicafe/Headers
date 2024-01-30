@class NSDictionary, NSString;

@interface CPParticipant : NSObject <NSSecureCoding, NSCopying, CPArchivable> {
    unsigned char _localStatus;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long spatialAudioSourceID;
@property (readonly, nonatomic) unsigned char localStatus;
@property (readonly, copy, nonatomic) NSDictionary *avcStreams;
@property (readonly, nonatomic) long long audioToken;
@property (nonatomic, setter=_setSpatialAudioSourceIdentifier:) unsigned long long spatialAudioSourceIdentifier;
@property (nonatomic, setter=_setParticipantIdentifier:) unsigned long long participantIdentifier;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic, getter=isMirageAvailable) BOOL mirageAvailable;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long participantID;
@property (copy, nonatomic) NSDictionary *userContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_deserializeFrom:(id)a0;

- (id)initWithAccountIdentifier:(id)a0;
- (BOOL)_isNearby;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isLocal;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalentToParticipant:(id)a0;
- (id)_serialize;
- (void)_setSpatialAudioSourceId:(unsigned long long)a0;
- (void)_setParticipantID:(long long)a0;
- (void)_setAVCStreams:(id)a0;
- (void)_setAudioToken:(long long)a0;
- (void)_setLocalStatus:(unsigned char)a0;
- (id)_localStatusDescription;
- (BOOL)_isSpectator;

@end
