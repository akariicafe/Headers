@class NSString, NSUserActivity, WFImage, WFWorkflowIcon, NSDate;

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
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) WFImage *attributionIcon;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)attributionIconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rounded:(BOOL)a2;
- (id)speakableString;
- (id)initWithIdentifier:(id)a0 name:(id)a1 color:(long long)a2 glyphCharacter:(unsigned short)a3 associatedAppBundleIdentifier:(id)a4 subtitle:(id)a5 actionsDescription:(id)a6 actionCount:(unsigned long long)a7 isDeleted:(BOOL)a8 hiddenFromLibraryAndSync:(BOOL)a9 modificationDate:(id)a10;
- (id)externalURLForRunningWithSource:(id)a0;
- (id)externalURLForViewing;
- (void)donateRunInteraction;

@end
