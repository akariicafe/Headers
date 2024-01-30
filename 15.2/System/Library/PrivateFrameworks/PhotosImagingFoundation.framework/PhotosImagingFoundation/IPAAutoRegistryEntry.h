@interface IPAAutoRegistryEntry : NSObject

@property (retain, nonatomic) Class autoSettingsClass;
@property (nonatomic) BOOL persistable;

- (void).cxx_destruct;

@end
