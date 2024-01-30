@class NSString;

@interface SeymourServices.ScriptConfiguration : NSObject <SeymourServices.ScriptConfigurationExport> {
    void /* unknown type, empty encoding */ platform;
}

@property (nonatomic, readonly) NSString *platformName;
@property (nonatomic, readonly) BOOL useSimulatorBag;
@property (nonatomic, readonly) BOOL useLocalEndpoint;

- (id)init;

@end
