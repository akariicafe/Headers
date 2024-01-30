@class NSArray, ASAAudioDevice, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ASACoreAudio : ASAObject {
    unsigned int _cadPort;
    NSObject<OS_dispatch_source> *_deathSource;
    NSObject<OS_dispatch_queue> *_clientQueue;
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
@property (copy, nonatomic) ASAAudioDevice *defaultInputAudioDevice;
@property (copy, nonatomic) ASAAudioDevice *defaultOutputAudioDevice;
@property (copy, nonatomic) ASAAudioDevice *defaultSystemOutputAudioDevice;
@property (nonatomic) unsigned int defaultInputAudioDeviceObjectID;
@property (nonatomic) unsigned int defaultOutputAudioDeviceObjectID;
@property (nonatomic) unsigned int defaultSystemOutputAudioDeviceObjectID;

+ (id)coreAudio;
+ (id)sharedCoreAudioObject;

- (void)addClient:(id)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)removeClient:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)plugins;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;
- (id)audioDevices;
- (id)boxes;
- (id)clockDevices;
- (id)pluginObjectIDs;
- (void)_setDefaultInputAudioDeviceObjectID:(unsigned int)a0 transient:(BOOL)a1;
- (void)_setDefaultOutputAudioDeviceObjectID:(unsigned int)a0 transient:(BOOL)a1;
- (void)_setDefaultSystemOutputAudioDeviceObjectID:(unsigned int)a0 transient:(BOOL)a1;
- (void)_setupDeathSource;
- (void)_teardownDeathSource;
- (unsigned int)audioDeviceObjectIDWithUID:(id)a0;
- (id)audioDeviceObjectIDs;
- (id)audioDeviceWithUID:(id)a0;
- (unsigned int)boxObjectIDWithUID:(id)a0;
- (id)boxObjectIDs;
- (id)boxWithUID:(id)a0;
- (unsigned int)clockDeviceObjectIDWithUID:(id)a0;
- (id)clockDeviceObjectIDs;
- (id)clockDeviceWithUID:(id)a0;
- (id)coreAudioClassName;
- (id)initWithAudioObjectID:(unsigned int)a0;
- (unsigned int)pluginObjectIDWithBundleID:(id)a0;
- (id)pluginWithBundleID:(id)a0;
- (void)setTransientDefaultInputAudioDevice:(id)a0;
- (void)setTransientDefaultInputAudioDeviceObjectID:(unsigned int)a0;
- (void)setTransientDefaultOutputAudioDevice:(id)a0;
- (void)setTransientDefaultOutputAudioDeviceObjectID:(unsigned int)a0;
- (void)setTransientDefaultSystemOutputAudioDevice:(id)a0;
- (void)setTransientDefaultSystemOutputAudioDeviceObjectID:(unsigned int)a0;
- (unsigned int)transportManagerObjectIDWithBundleID:(id)a0;
- (id)transportManagerWithBundleID:(id)a0;

@end
