@class NSData;

@interface FTMutableTextToSpeechVoiceResource : FTTextToSpeechVoiceResource

@property (nonatomic) long long type;
@property (copy, nonatomic) NSData *data;

- (id)init;
- (void)data:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
