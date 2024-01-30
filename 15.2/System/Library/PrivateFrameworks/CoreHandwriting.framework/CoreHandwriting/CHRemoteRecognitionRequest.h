@class NSArray, NSDictionary, CHDrawing;

@interface CHRemoteRecognitionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *locales;
@property (copy, nonatomic) NSDictionary *activeCharacterSetPerLocale;
@property (nonatomic) int recognitionMode;
@property (nonatomic) struct CGSize { double width; double height; } minimumDrawingSize;
@property (nonatomic) int contentType;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) CHDrawing *drawing;
@property (nonatomic) BOOL shouldUseTextReplacements;
@property (nonatomic) BOOL enableCachingIfAvailable;
@property (nonatomic) BOOL enableGen2ModelIfAvailable;
@property (nonatomic) BOOL enableGen2CharacterLMIfAvailable;
@property (nonatomic) BOOL hasBeenSubmitted;
@property (nonatomic) long long priority;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithLocales:(id)a0 recognitionMode:(int)a1 drawing:(id)a2 options:(id)a3 priority:(long long)a4;
- (BOOL)isEqualToRemoteRecognitionRequest:(id)a0;
- (id)recognizerConfigurationKeyWithLocale:(id)a0;

@end
