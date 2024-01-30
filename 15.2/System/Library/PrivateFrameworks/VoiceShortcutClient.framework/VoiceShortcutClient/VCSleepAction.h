@class NSString, NSDictionary;

@interface VCSleepAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *workflowActionIdentifier;
@property (copy, nonatomic) NSDictionary *serializedParameters;
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic, getter=isGoodForSleep) BOOL goodForSleep;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long shortcutAvailability;

+ (id)openAppActionWithBundleIdentifier:(id)a0;
+ (id)identifierForWorkflowActionIdentifier:(id)a0 serializedParameters:(id)a1;
+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 workflowActionIdentifier:(id)a1 sourceAppBundleIdentifier:(id)a2 bundleIdentifierForDisplay:(id)a3 title:(id)a4 subtitle:(id)a5 serializedParameters:(id)a6 shortcutAvailability:(unsigned long long)a7;

@end
