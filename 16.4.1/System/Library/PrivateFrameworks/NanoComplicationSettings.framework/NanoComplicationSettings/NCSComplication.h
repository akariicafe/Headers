@class NSString;

@interface NCSComplication : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *complicationBundleIdentifier;
@property (copy, nonatomic) NSString *sockPuppetIdentifier;
@property (readonly, nonatomic) NSString *complicationIdentifier;
@property (nonatomic) BOOL cannotBeDisabled;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) unsigned long long installState;
@property (readonly, nonatomic) BOOL isInstalled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
