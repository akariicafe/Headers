@class NSArray, FMMixParameters;

@interface FMTrack : NSObject

@property (retain, nonatomic) NSArray *clips;
@property (retain, nonatomic) FMMixParameters *mixParameters;

- (id)description;
- (void).cxx_destruct;
- (id)initWithClips:(id)a0 mixParameters:(id)a1;

@end
