@class NSData;

@interface FTMutableTextToSpeechVoiceResource : FTTextToSpeechVoiceResource

@property (nonatomic) long long type;
@property (copy, nonatomic) NSData *data;

- (void)data:(id /* block */)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
