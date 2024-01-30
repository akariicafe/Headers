@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ASACoreAudio : ASAObject {
    unsigned int _cadPort;
    NSObject<OS_dispatch_source> *_deathSource;
    NSObject<OS_dispatch_queue> *_deathQueue;
    NSMutableArray *_clients;
    NSMutableArray *_plugins;
}

@property (readonly, copy, nonatomic) NSArray *boxObjectIDs;
@property (readonly, copy, nonatomic) NSArray *audioDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *deviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *clockDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *pluginObjectIDs;
@property (readonly, copy, nonatomic) NSArray *boxes;
@property (readonly, copy, nonatomic) NSArray *audioDevices;
@property (readonly, copy, nonatomic) NSArray *clockDevices;
@property (readonly, copy, nonatomic) NSArray *plugins;

+ (id)sharedCoreAudioObject;
+ (id)coreAudio;

- (id)plugins;
- (void)removeClient:(id)a0;
- (id)boxes;
- (void).cxx_destruct;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)addClient:(id)a0;
- (void)dealloc;
- (void)addPlugin:(id)a0;
- (id)audioDeviceWithUID:(id)a0;
- (id)pluginWithBundleID:(id)a0;
- (unsigned int)audioDeviceObjectIDWithUID:(id)a0;
- (id)clockDeviceWithUID:(id)a0;
- (id)initWithAudioObjectID:(unsigned int)a0;
- (id)coreAudioClassName;
- (unsigned int)pluginObjectIDWithBundleID:(id)a0;
- (unsigned int)boxObjectIDWithUID:(id)a0;
- (unsigned int)clockDeviceObjectIDWithUID:(id)a0;
- (id)boxObjectIDs;
- (id)audioDeviceObjectIDs;
- (id)clockDeviceObjectIDs;
- (id)boxWithUID:(id)a0;
- (id)audioDevices;
- (id)clockDevices;
- (void)_setupDeathSource;
- (void)_teardownDeathSource;
- (unsigned int)defaultInputAudioDeviceObjectID;
- (unsigned int)defaultOutputAudioDeviceObjectID;
- (unsigned int)defaultSystemOutputAudioDeviceObjectID;
- (unsigned int)transportManagerObjectIDWithBundleID:(id)a0;
- (id)pluginObjectIDs;
- (id)defaultInputAudioDevice;
- (id)defaultOutputAudioDevice;
- (void)removePlugin:(id)a0;
- (id)defaultSystemOutputAudioDevice;
- (id)transportManagerWithBundleID:(id)a0;

@end
