@class NSArray, NSString, NSUserActivity, WFWorkflowIcon, NSDate, WFIcon;

@interface WFWorkflowReference : WFWorkflowDescriptor <WFNaming, NSItemProviderReading, NSItemProviderWriting>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSUserActivity *userActivityForViewing;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *actionsDescription;
@property (readonly, nonatomic) unsigned long long actionCount;
@property (readonly, copy, nonatomic) WFWorkflowIcon *icon;
@property (readonly, nonatomic) BOOL isDeleted;
@property (readonly, nonatomic) BOOL hiddenFromLibraryAndSync;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSDate *lastRunDate;
@property (readonly, nonatomic) long long remoteQuarantineStatus;
@property (readonly, nonatomic) BOOL hasShortcutInputVariables;
@property (readonly, nonatomic) BOOL disabledOnLockScreen;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) WFIcon *attributionIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (BOOL)supportsSecureCoding;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)attributionIconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rounded:(BOOL)a2;
- (id)speakableString;
- (void)donateRunInteraction;
- (id)externalURLForRunningWithSource:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 color:(long long)a2 glyphCharacter:(unsigned short)a3 associatedAppBundleIdentifier:(id)a4 subtitle:(id)a5 actionsDescription:(id)a6 actionCount:(unsigned long long)a7 isDeleted:(BOOL)a8 hiddenFromLibraryAndSync:(BOOL)a9 creationDate:(id)a10 modificationDate:(id)a11 lastRunDate:(id)a12 remoteQuarantineStatus:(long long)a13 hasShortcutInputVariables:(BOOL)a14 disabledOnLockScreen:(BOOL)a15 source:(id)a16;

@end
