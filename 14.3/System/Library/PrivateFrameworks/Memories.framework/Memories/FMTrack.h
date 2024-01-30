@class NSArray, FMMixParameters;

@interface FMTrack : NSObject

@property (retain, nonatomic) NSArray *clips;
@property (retain, nonatomic) FMMixParameters *mixParameters;

- (void).cxx_destruct;
- (id)description;
- (id)initWithClips:(id)a0 mixParameters:(id)a1;

@end
