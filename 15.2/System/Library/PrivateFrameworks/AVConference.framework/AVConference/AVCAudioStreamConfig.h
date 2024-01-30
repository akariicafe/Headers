@interface AVCAudioStreamConfig : NSObject

@property (nonatomic) long long audioStreamMode;
@property (nonatomic) long long codecType;
@property (nonatomic, getter=isCNEnabled) BOOL cnEnabled;
@property (nonatomic) unsigned long long cnPayloadType;
@property (nonatomic) unsigned long long dtmfPayloadType;
@property (nonatomic) unsigned long long dtmfTimestampRate;
@property (nonatomic) unsigned long long ptime;
@property (nonatomic) unsigned long long maxPtime;
@property (nonatomic) float volume;
@property (nonatomic) unsigned long long channelAwareOffset;
@property (nonatomic, getter=isOctectAligned) BOOL octetAligned;
@property (nonatomic, getter=isHeaderFullOnly) BOOL headerFullOnly;
@property (nonatomic, getter=isDTXEnabled) BOOL dtxEnabled;
@property (nonatomic) long long preferredCodecRateMode;
@property (nonatomic) unsigned int codecRateModeMask;
@property (nonatomic, getter=isLatencySensitiveMode) BOOL latencySensitiveMode;
@property (nonatomic) BOOL enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) unsigned long long numRedundantPayloads;
@property (nonatomic) unsigned long long txRedPayloadType;
@property (nonatomic) unsigned long long rxRedPayloadType;

+ (long long)clientCodecTypeWithCodecType:(long long)a0;
+ (long long)clientStreamModeWithStreamMode:(long long)a0;
+ (unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)a0;
+ (long long)clientCodecRateModeForCodecRateMode:(int)a0;
+ (long long)streamModeWithClientStreamMode:(long long)a0;
+ (unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)a0;
+ (int)codecRateModeForClientCodecRateMode:(long long)a0;
+ (long long)codecTypeWithClientCodecType:(long long)a0;

- (id)init;
- (id)dictionary;
- (BOOL)isValid;
- (void)setUpWithDictionary:(id)a0;
- (BOOL)isDTMFValid;
- (BOOL)isCNValid;
- (BOOL)isRedValid;

@end
