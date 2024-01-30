@class NSArray, NSMutableArray;

@interface ARCoachingBlendableSplineGroup : NSObject {
    NSMutableArray *_controlPoints;
    struct vector<ARCoachingPatchData, std::allocator<ARCoachingPatchData>> { struct *__begin_; struct *__end_; struct __compressed_pair<ARCoachingPatchData *, std::allocator<ARCoachingPatchData>> { struct *__value_; } __end_cap_; } _patchData;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _indices;
}

@property (readonly, nonatomic) NSArray *controlPoints;
@property (readonly, nonatomic) struct { } *patchData;
@property (readonly, nonatomic) unsigned int patchDataLength;
@property (readonly, nonatomic) unsigned short *indices;
@property (readonly, nonatomic) unsigned int numIndices;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSplineGroups:(id)a0;

@end
