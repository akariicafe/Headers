@class NSArray, NSMutableDictionary, NSData;

@interface FTAudioAnalytics : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AudioAnalytics { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *speech_recognition_features;
@property (readonly, nonatomic) NSArray *acoustic_features;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AudioAnalytics { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::AudioAnalytics> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AudioAnalytics { unsigned char x0[1]; } *)a1;

@end
