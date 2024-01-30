@class NSArray, NSString;

@interface NewMediaClip : KenBurnsClip <CompoundClipInformation>

@property (retain, nonatomic) NSArray *containedClips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)maxDuration;
- (void)setDuration:(int)a0;
- (BOOL)expandsEditList;
- (id)newMediaAssetVideoPiece;
- (id)initWithKBClip:(id)a0;

@end
