@class NSData, NSString, NSSet, NSURL, NSArray, NSOrderedSet, TUSandboxExtendedURL;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSSet *supportedHandleTypes;
@property (copy, nonatomic) NSArray *emergencyHandles;
@property (copy, nonatomic) NSArray *emergencyLabeledHandles;
@property (copy, nonatomic) NSArray *handoffIdentifiers;
@property (copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities;
@property (retain, nonatomic) NSURL *ringtoneSoundURL;
@property (retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedRingtoneSoundURL;
@property (retain, nonatomic) NSURL *originalRingtoneSoundURL;
@property (copy, nonatomic) NSData *iconTemplateImageData;
@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) unsigned long long maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup;
@property (nonatomic) BOOL supportsAudioOnly;
@property (nonatomic) BOOL supportsAudioAndVideo;
@property (nonatomic) BOOL supportsEmergency;
@property (nonatomic) BOOL supportsVoicemail;
@property (nonatomic) BOOL supportsRecents;
@property (nonatomic) BOOL supportsCurrentPlatform;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) long long sandboxExtensionHandle;
@property (readonly, nonatomic, getter=isTelephonyProvider) BOOL telephonyProvider;
@property (readonly, nonatomic, getter=isFaceTimeProvider) BOOL faceTimeProvider;
@property (readonly, nonatomic, getter=isSuperboxProvider) BOOL superboxProvider;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)senderIdentityForAccountUUID:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isSystemProvider;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTinCanProvider;
- (BOOL)isEqualToCallProvider:(id)a0;
- (BOOL)supportsHandleType:(long long)a0;
- (BOOL)supportsShowingInCallUI;
- (BOOL)prefersShowingInCallUI;
- (BOOL)hasRestrictionsInRetailEnvironment;
- (id)senderIdentityForUUID:(id)a0;
- (id)senderIdentityForHandle:(id)a0;
- (id)displayAppBundleIdentifier;
- (id)inCallUIBundleIdentifier;
- (void)setSenderIdentities:(id)a0;
- (id)senderIdentities;
- (void)encodeWithCoder:(id)a0;

@end
