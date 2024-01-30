@class NSArray;

@interface BWMetadataTimeMachineMetadataRequest : BWMetadataTimeMachineRequest {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _ptsRange;
    NSArray *_metadataForPTSRange;
}

- (id)description;
- (void)dealloc;

@end
