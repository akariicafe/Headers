@interface AVCTextStreamConfig : NSObject

@property (nonatomic) long long codecType;
@property (nonatomic) unsigned long long numRedundantPayloads;
@property (nonatomic) unsigned long long txRedPayloadType;
@property (nonatomic) unsigned long long rxRedPayloadType;
@property (nonatomic) float txIntervalMin;

+ (long long)clientCodecTypeWithCodecType:(long long)a0;
+ (long long)codecTypeWithClientCodecType:(long long)a0;

- (id)dictionary;
- (BOOL)isValid;
- (BOOL)isRedValid;
- (void)setUpWithDictionary:(id)a0;

@end
