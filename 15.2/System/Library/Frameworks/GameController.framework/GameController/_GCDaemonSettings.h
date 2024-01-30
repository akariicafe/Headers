@class NSUserDefaults;

@interface _GCDaemonSettings : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)init;
- (id)newAnonymizedIdentifiersDictionary:(id)a0;
- (id)anonymizedIdentifierForControllerIdentifier:(id)a0;

@end
