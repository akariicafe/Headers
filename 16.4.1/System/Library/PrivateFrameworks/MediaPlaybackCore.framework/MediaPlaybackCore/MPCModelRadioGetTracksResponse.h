@class MPSectionedCollection;

@interface MPCModelRadioGetTracksResponse : NSObject

@property (readonly, nonatomic) long long tracklistAction;
@property (readonly, copy, nonatomic) MPSectionedCollection *tracks;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTracks:(id)a0 tracklistAction:(long long)a1;

@end
