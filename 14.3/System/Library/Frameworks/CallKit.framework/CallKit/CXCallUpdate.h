@class NSUUID, NSString, NSSet, CXHandoffContext, NSDictionary, CXHandle;

@interface CXCallUpdate : NSObject <CXCopying, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (nonatomic) struct CXCallUpdateHasSet { unsigned char remoteHandle : 1; unsigned char localizedCallerName : 1; unsigned char emergency : 1; unsigned char usingBaseband : 1; unsigned char blocked : 1; unsigned char ttyType : 1; unsigned char supportsTTYWithVoice : 1; unsigned char mayRequireBreakBeforeMake : 1; unsigned char hasVideo : 1; unsigned char audioCategory : 1; unsigned char audioMode : 1; unsigned char audioInterruptionProvider : 1; unsigned char audioInterruptionOperationMode : 1; unsigned char verificationStatus : 1; unsigned char priority : 1; unsigned char requiresInCallSounds : 1; unsigned char inCallSoundRegion : 1; unsigned char supportsHolding : 1; unsigned char supportsGrouping : 1; unsigned char supportsUngrouping : 1; unsigned char supportsDTMF : 1; unsigned char supportsUnambiguousMultiPartyState : 1; unsigned char supportsAddCall : 1; unsigned char supportsSendingToVoicemail : 1; unsigned char videoStreamToken : 1; unsigned char crossDeviceIdentifier : 1; unsigned char ISOCountryCode : 1; unsigned char localSenderIdentityUUID : 1; unsigned char localSenderIdentityAccountUUID : 1; unsigned char remoteParticipantHandles : 1; unsigned char activeRemoteParticipantHandles : 1; unsigned char handoffContext : 1; unsigned char context : 1; unsigned char prefersExclusiveAccessToCellularNetwork : 1; unsigned char remoteUplinkMuted : 1; unsigned char shouldSuppressInCallUI : 1; unsigned char requiresAuthentication : 1; unsigned char mutuallyExclusiveCall : 1; unsigned char originatingUIType : 1; unsigned char junkConfidence : 1; unsigned char identificationCategory : 1; } hasSet;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic, getter=isEmergency) BOOL emergency;
@property (nonatomic, getter=isUsingBaseband) BOOL usingBaseband;
@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (nonatomic) BOOL mayRequireBreakBeforeMake;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (nonatomic) BOOL supportsTTYWithVoice;
@property (nonatomic) BOOL requiresInCallSounds;
@property (nonatomic) long long inCallSoundRegion;
@property (copy, nonatomic) NSString *audioCategory;
@property (copy, nonatomic) NSString *audioMode;
@property (nonatomic) long long audioInterruptionProvider;
@property (nonatomic) long long audioInterruptionOperationMode;
@property (nonatomic) long long verificationStatus;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *crossDeviceIdentifier;
@property (copy, nonatomic) NSString *ISOCountryCode;
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID;
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property (copy, nonatomic) NSSet *remoteParticipantHandles;
@property (copy, nonatomic) NSSet *activeRemoteParticipantHandles;
@property (retain, nonatomic) CXHandoffContext *handoffContext;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) BOOL prefersExclusiveAccessToCellularNetwork;
@property (nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (nonatomic, getter=isMutuallyExclusiveCall) BOOL mutuallyExclusiveCall;
@property (nonatomic) unsigned long long originatingUIType;
@property (nonatomic) long long junkConfidence;
@property (nonatomic) long long identificationCategory;
@property (nonatomic) BOOL supportsUnambiguousMultiPartyState;
@property (nonatomic) BOOL supportsAddCall;
@property (nonatomic) BOOL supportsSendingToVoicemail;
@property (nonatomic) long long videoStreamToken;
@property (nonatomic) BOOL requiresAuthentication;
@property (copy, nonatomic) CXHandle *remoteHandle;
@property (copy, nonatomic) NSString *localizedCallerName;
@property (nonatomic) BOOL supportsHolding;
@property (nonatomic) BOOL supportsGrouping;
@property (nonatomic) BOOL supportsUngrouping;
@property (nonatomic) BOOL supportsDTMF;
@property (nonatomic) BOOL hasVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callUpdateWithDefaultValuesSet;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)blocked;
- (BOOL)emergency;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopy;
- (BOOL)usingBaseband;
- (BOOL)remoteUplinkMuted;
- (BOOL)mutuallyExclusiveCall;
- (void)updateWithUpdate:(id)a0;

@end
