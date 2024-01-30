@class NSString;
@protocol TTSSpeechService;

@interface TTSSpeechVoice : NSObject <NSSecureCoding, NSCopying> {
    id<TTSSpeechService> _service;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long footprint;
@property (readonly, nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isSystemVoice;
@property (readonly, nonatomic) BOOL isFallbackDefault;
@property (readonly, nonatomic) BOOL excludeInAvailableVoiceList;
@property (nonatomic) long long gender;
@property (nonatomic) BOOL canBeDownloaded;
@property (readonly, nonatomic) BOOL isCombinedFootprint;
@property (retain, nonatomic) NSString *nonCombinedVoiceId;

+ (id)localizedName:(id)a0 forLanguage:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)service;
- (BOOL)isEqual:(id)a0;
- (void)setService:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedNameForLanguage:(id)a0;

@end
