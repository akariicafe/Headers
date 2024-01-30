@class NSString, NSUserActivity, WFIcon, WFWorkflowIcon, NSDate;

@interface WFWorkflowReference : WFWorkflowDescriptor <WFNaming>

@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSUserActivity *userActivityForViewing;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *actionsDescription;
@property (readonly, nonatomic) unsigned long long actionCount;
@property (readonly, copy, nonatomic) WFWorkflowIcon *icon;
@property (readonly, nonatomic) BOOL isDeleted;
@property (readonly, nonatomic) BOOL hiddenFromLibraryAndSync;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSDate *lastRunDate;
@property (readonly, nonatomic) long long remoteQuarantineStatus;
@property (readonly, nonatomic) BOOL hasShortcutInputVariables;
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) WFIcon *attributionIcon;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)attributionIconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rounded:(BOOL)a2;
- (id)speakableString;
- (id)initWithIdentifier:(id)a0 name:(id)a1 color:(long long)a2 glyphCharacter:(unsigned short)a3 associatedAppBundleIdentifier:(id)a4 subtitle:(id)a5 actionsDescription:(id)a6 actionCount:(unsigned long long)a7 isDeleted:(BOOL)a8 hiddenFromLibraryAndSync:(BOOL)a9 modificationDate:(id)a10 lastRunDate:(id)a11 remoteQuarantineStatus:(long long)a12 hasShortcutInputVariables:(BOOL)a13;
- (id)externalURLForRunningWithSource:(id)a0;
- (void)donateRunInteraction;

@end
