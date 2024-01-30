@class MPSectionedCollection, MPCMediaRemoteController;
@protocol MPCPlayerSessionResponseBuilder;

@interface MPCPlayerSessionResponse : MPResponse

@property (readonly, nonatomic) id<MPCPlayerSessionResponseBuilder> builder;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (readonly, nonatomic) MPSectionedCollection *items;

+ (id)builderProtocol;

- (id)initWithRequest:(id)a0 middleware:(id)a1;
- (void).cxx_destruct;

@end
