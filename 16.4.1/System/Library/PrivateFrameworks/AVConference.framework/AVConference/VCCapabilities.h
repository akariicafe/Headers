@interface VCCapabilities : NSObject <NSCoding>

@property BOOL isAudioEnabled;
@property BOOL isAudioPausedToStart;
@property BOOL isVideoEnabled;
@property BOOL isVideoPausedToStart;
@property BOOL isVideoSourceScreen;
@property BOOL isDuplexVideoOnly;
@property BOOL isDuplexAudioOnly;
@property BOOL isHalfDuplexAudio;
@property BOOL isKeyExchangeEnabled;
@property BOOL isRelayEnabled;
@property BOOL isRelayForced;
@property BOOL requiresWifi;
@property BOOL isDTLSEnabled;
@property unsigned int preferredAudioCodec;
@property unsigned int actualAudioCodec;
@property unsigned int preferredVideoCodec;
@property unsigned int actualVideoCodec;
@property int deviceRole;

+ (id)DataOnlyVCCapabilities;
+ (id)AudioOnlyVCCapabilities;
+ (id)VideoOnlyVCCapabilities;
+ (id)screenSharingVCCapabilities;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEncodedDictionary:(id)a0;
- (id)init;
- (id)description;
- (void)decodeFromNSDictionary:(id)a0;
- (id)newEncodedDictionary;

@end
