@class NSData, NSMutableDictionary;

@interface FTAudioDescription : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AudioDescription { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) double sample_rate;
@property (readonly, nonatomic) unsigned int format_id;
@property (readonly, nonatomic) unsigned int format_flags;
@property (readonly, nonatomic) unsigned int bytes_per_packet;
@property (readonly, nonatomic) unsigned int frames_per_packet;
@property (readonly, nonatomic) unsigned int bytes_per_frame;
@property (readonly, nonatomic) unsigned int channels_per_frame;
@property (readonly, nonatomic) unsigned int bits_per_channel;
@property (readonly, nonatomic) unsigned int reserved;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::AudioDescription> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AudioDescription { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AudioDescription { unsigned char x0[1]; } *)a1;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescription;

@end
