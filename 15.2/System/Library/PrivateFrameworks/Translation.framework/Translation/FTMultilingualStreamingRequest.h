@class NSMutableDictionary, NSData, FTStartMultilingualSpeechRequest, FTAudioPacket, FTFinishAudio, FTSetRequestOrigin, FTSetSpeechProfile, FTUpdateAudioInfo, FTSetSpeechContext, FTLanguageDetected;

@interface FTMultilingualStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultilingualStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTStartMultilingualSpeechRequest *contentAsFTStartMultilingualSpeechRequest;
@property (readonly, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (readonly, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (readonly, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (readonly, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (readonly, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultilingualStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::qss_fb::MultilingualStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultilingualStreamingRequest { unsigned char x0[1]; } *)a1;

@end
