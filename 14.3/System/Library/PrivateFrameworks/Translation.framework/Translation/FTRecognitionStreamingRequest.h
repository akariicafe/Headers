@class NSMutableDictionary, FTStartSpeechRequest, FTSetSpeechProfile, FTCheckForSpeechRequest, FTSetEndpointerState, FTFinishAudio, FTResetServerEndpointer, FTSetAlternateRecognitionSausage, FTAudioPacket, NSData, FTSetSpeechContext, FTSetRequestOrigin, FTUpdateAudioInfo;

@interface FTRecognitionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTStartSpeechRequest *contentAsFTStartSpeechRequest;
@property (readonly, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (readonly, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (readonly, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (readonly, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (readonly, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (readonly, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTCheckForSpeechRequest *contentAsFTCheckForSpeechRequest;
@property (readonly, nonatomic) FTSetAlternateRecognitionSausage *contentAsFTSetAlternateRecognitionSausage;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingRequest> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingRequest { unsigned char x0[1]; } *)a1;

@end
