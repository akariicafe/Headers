@class NSString, NSUserDefaults, NSSet;

@interface NSSUserDefaultsDataDestructionItem : NSObject <NSCopying>

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) NSSet *stickyKeys;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserDefaults:(id)a0 domainName:(id)a1 stickyKeys:(id)a2;

@end
