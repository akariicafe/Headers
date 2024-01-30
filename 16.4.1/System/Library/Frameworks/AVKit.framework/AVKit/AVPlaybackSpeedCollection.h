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
+ (id)collectionWithSpeeds:(id)a0;
+ (id)defaultSpeedFromList:(id)a0;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;

- (id)internalDescription;
- (id)delegate;
- (id)displaySpeeds;
- (void)selectNextPlaybackSpeed:(id)a0;
- (void)selectSpeed:(id)a0;
- (void)setDelegate:(id)a0;
- (id)debugDescription;
- (void)setActiveSpeed:(id)a0;
- (id)activeSpeed;
- (id)description;
- (id)_initInternalWithSpeeds:(id)a0;
- (void).cxx_destruct;

@end
