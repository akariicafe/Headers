@interface ASVSplineGroup : NSObject {
    struct vector<ASVControlPoint, std::allocator<ASVControlPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<ASVControlPoint *, std::allocator<ASVControlPoint>> { struct *__value_; } __end_cap_; } _controlPoints;
    struct vector<ASVPatchData, std::allocator<ASVPatchData>> { struct *__begin_; struct *__end_; struct __compressed_pair<ASVPatchData *, std::allocator<ASVPatchData>> { struct *__value_; } __end_cap_; } _patchData;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _indices;
}

@property (readonly, nonatomic) struct { float x0; } *controlPoints;
@property (readonly, nonatomic) unsigned int numControlPoints;
@property (readonly, nonatomic) struct { } *patchData;
@property (readonly, nonatomic) unsigned int patchDataLength;
@property (readonly, nonatomic) unsigned short *indices;
@property (readonly, nonatomic) unsigned int numIndices;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSplines:(id)a0;

@end
