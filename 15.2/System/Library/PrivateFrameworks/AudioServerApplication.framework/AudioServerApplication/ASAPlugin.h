@class NSString, NSURL, NSArray;

@interface ASAPlugin : ASAObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSURL *resourceBundleURL;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSArray *boxObjectIDs;
@property (readonly, copy, nonatomic) NSArray *audioDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *clockDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *boxes;
@property (readonly, copy, nonatomic) NSArray *audioDevices;
@property (readonly, copy, nonatomic) NSArray *clockDevices;

+ (id)pluginWithBundleIdentifier:(id)a0;

- (id)manufacturer;
- (id)initWithBundleIdentifier:(id)a0;
- (id)boxes;
- (id)bundleID;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)resourceBundleURL;
- (id)audioDeviceWithUID:(id)a0;
- (unsigned int)audioDeviceObjectIDWithUID:(id)a0;
- (id)clockDeviceWithUID:(id)a0;
- (id)coreAudioClassName;
- (unsigned int)boxObjectIDWithUID:(id)a0;
- (unsigned int)clockDeviceObjectIDWithUID:(id)a0;
- (id)boxObjectIDs;
- (id)audioDeviceObjectIDs;
- (id)clockDeviceObjectIDs;
- (id)deviceObjectIDs;
- (id)boxWithUID:(id)a0;
- (id)audioDevices;
- (id)clockDevices;

@end
