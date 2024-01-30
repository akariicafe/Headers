@class NSString;

@interface HDRespiratoryDaemonPlugin : NSObject <HDPlugin, HDTaskServerClassProvider> {
    BOOL _forceFeaturesEnabled;
}

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extensionForHealthDaemon:(id)a0;
- (void)handleDatabaseObliteration;
- (id)initWithForcingFeaturesEnabled:(BOOL)a0;
- (id)taskServerClasses;
- (id)extensionForProfile:(id)a0;

@end
