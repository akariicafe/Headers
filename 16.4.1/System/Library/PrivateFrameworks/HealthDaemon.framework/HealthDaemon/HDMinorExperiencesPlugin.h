@class NSString;

@interface HDMinorExperiencesPlugin : NSObject <HDPlugin>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extensionForProfile:(id)a0;
- (id)extensionForHealthDaemon:(id)a0;

@end
