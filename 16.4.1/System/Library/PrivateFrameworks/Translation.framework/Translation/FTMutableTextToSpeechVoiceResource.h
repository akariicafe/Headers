@class NSData;

@interface FTMutableTextToSpeechVoiceResource : FTTextToSpeechVoiceResource

@property (nonatomic) long long type;
@property (copy, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)data:(id /* block */)a0;

@end
