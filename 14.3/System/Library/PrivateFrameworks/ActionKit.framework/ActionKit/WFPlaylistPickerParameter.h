@class NSArray, WFAppleMusicAccessResource, WFPlaylistSubstitutableState;

@interface WFPlaylistPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) BOOL showLibrary;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (retain, nonatomic) WFPlaylistSubstitutableState *entireLibraryState;
@property (nonatomic) BOOL generatingNotifications;
@property (retain, nonatomic) WFAppleMusicAccessResource *appleMusicAccessResource;

+ (id)referencedActionResourceClasses;
+ (BOOL)hasPlaylistAccess;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)setActionResources:(id)a0;
- (void)authorizationStatusDidChange;
- (void)updateChangeNotificationRegistration;

@end
