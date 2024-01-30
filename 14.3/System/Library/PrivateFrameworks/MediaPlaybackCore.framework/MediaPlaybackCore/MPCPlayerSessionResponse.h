@class MPSectionedCollection, MPCMediaRemoteController;
@protocol MPCPlayerSessionResponseBuilder;

@interface MPCPlayerSessionResponse : MPResponse

@property (readonly, nonatomic) id<MPCPlayerSessionResponseBuilder> builder;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (readonly, nonatomic) MPSectionedCollection *items;

+ (id)builderProtocol;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 middleware:(id)a1;

@end
