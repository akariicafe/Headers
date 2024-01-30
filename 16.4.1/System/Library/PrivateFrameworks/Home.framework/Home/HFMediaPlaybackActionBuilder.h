@class NSSet, HFPlaybackArchive, HMMediaPlaybackAction, NSString, NSNumber;

@interface HFMediaPlaybackActionBuilder : HFActionBuilder

@property (copy, nonatomic) NSSet *accessories;
@property (readonly, nonatomic) HMMediaPlaybackAction *action;
@property (copy, nonatomic) NSSet *mediaProfiles;
@property (nonatomic) long long targetPlayState;
@property (retain, nonatomic) NSNumber *targetVolume;
@property (retain, nonatomic) HFPlaybackArchive *playbackArchive;
@property (readonly, copy, nonatomic) NSString *localizedDescription;

+ (Class)homeKitRepresentationClass;

- (id)performValidation;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isAffectedByEndEvents;
- (BOOL)requiresDeviceUnlock;
- (id)validationError;
- (id)createNewAction;
- (id)commitItem;
- (id)containedAccessoryRepresentables;
- (id)copyForCreatingNewAction;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)_ensureConsistency;
- (BOOL)canUpdateWithActionBuilder:(id)a0;
- (id)compareToObject:(id)a0;
- (void)defaultActionIfMediaActionInvalid;
- (BOOL)isMediaActionValid:(id *)a0;
- (id)mediaProfileContainersForAccessories:(id)a0 home:(id)a1;
- (BOOL)updateWithActionBuilder:(id)a0;

@end
