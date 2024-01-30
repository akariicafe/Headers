@class NSString, PSUsageBundleApp;

@interface PSUsageBundleCategory : NSObject

@property (weak, nonatomic) PSUsageBundleApp *usageBundleApp;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;

+ (id)categoryNamed:(id)a0 withIdentifier:(id)a1 forUsageBundleApp:(id)a2;

- (void).cxx_destruct;
- (id)description;

@end
