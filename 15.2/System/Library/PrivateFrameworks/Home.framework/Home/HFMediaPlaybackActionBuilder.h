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

- (id)description;
- (void).cxx_destruct;
- (id)performValidation;
- (BOOL)requiresDeviceUnlock;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)createNewAction;
- (BOOL)updateWithActionBuilder:(id)a0;
- (id)commitItem;
- (id)compareToObject:(id)a0;
- (BOOL)canUpdateWithActionBuilder:(id)a0;
- (id)copyForCreatingNewAction;
- (BOOL)isAffectedByEndEvents;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (id)mediaProfileContainersForAccessories:(id)a0 home:(id)a1;
- (BOOL)isMediaActionValid:(id *)a0;
- (void)_ensureConsistency;
- (void)defaultActionIfMediaActionInvalid;

@end
