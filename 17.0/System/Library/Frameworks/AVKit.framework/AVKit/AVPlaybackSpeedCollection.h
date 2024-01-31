@class NSArray, AVPlaybackSpeed;
@protocol AVPlaybackSpeedCollectionDelegate;

@interface AVPlaybackSpeedCollection : NSObject {
    id<AVPlaybackSpeedCollectionDelegate> _delegate;
    NSArray *_speeds;
    AVPlaybackSpeed *_activeSpeed;
}

@property (readonly, nonatomic) NSArray *speeds;
@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;

+ (id)keyPathsForValuesAffectingSelectedSpeed;
+ (id)defaultSpeedFromList:(id)a0;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;
+ (id)collectionWithSpeeds:(id)a0;

- (id)delegate;
- (void)selectSpeed:(id)a0;
- (id)internalDescription;
- (void)selectNextPlaybackSpeed:(id)a0;
- (id)displaySpeeds;
- (id)activeSpeed;
- (id)description;
- (void).cxx_destruct;
- (id)_initInternalWithSpeeds:(id)a0;
- (id)debugDescription;
- (void)setActiveSpeed:(id)a0;
- (void)setDelegate:(id)a0;

@end
