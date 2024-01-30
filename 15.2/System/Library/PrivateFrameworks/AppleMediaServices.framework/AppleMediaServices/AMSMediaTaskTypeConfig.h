@class NSString;

@interface AMSMediaTaskTypeConfig : NSObject

@property (readonly, nonatomic) NSString *hostBagKey;
@property (readonly, nonatomic) BOOL includePlatform;
@property (readonly, nonatomic) NSString *realm;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *typeString;

+ (id)configForType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 typeString:(id)a1 hostBagKey:(id)a2 realm:(id)a3 includePlatform:(BOOL)a4;

@end
