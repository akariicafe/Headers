@class MusicKit_SoftLinking_MPSectionedCollection, MPModelResponse;

@interface MusicKit_SoftLinking_MPModelResponse : NSObject {
    MPModelResponse *_underlyingResponse;
}

@property (readonly, copy, nonatomic) MusicKit_SoftLinking_MPSectionedCollection *results;

- (void).cxx_destruct;
- (id)initWithUnderlyingResponse:(id)a0;

@end
