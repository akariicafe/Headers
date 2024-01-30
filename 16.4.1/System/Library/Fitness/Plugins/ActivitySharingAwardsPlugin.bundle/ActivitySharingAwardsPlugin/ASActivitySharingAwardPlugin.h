@class NSString;

@interface ASActivitySharingAwardPlugin : NSObject <ACHAwardPlugin>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)templateAssetSource;

@end
