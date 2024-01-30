@class NSString;

@interface ICMigrationDeviceInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL upgraded;
@property (readonly, nonatomic) BOOL upgradedToIOS13;
@property (readonly, nonatomic) BOOL upgradable;
@property (readonly, nonatomic) BOOL upgradableToIOS13;
@property (readonly, nonatomic) BOOL isOSXDevice;
@property (readonly, nonatomic) BOOL isIOSDevice;

+ (void)logDeviceList:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0;
- (BOOL)shouldBeHidden;
- (id)initWithName:(id)a0 upgradable:(BOOL)a1 upgraded:(BOOL)a2;
- (id)loggableDescription;
- (id)attributedStringWithAttributes:(id)a0 asteriskColor:(id)a1;

@end
