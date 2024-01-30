@class MIDICIDeviceInfo, NSArray, NSNumber, NSMutableArray;

@interface MIDICISession : NSObject {
    unsigned int _client;
    NSArray *_supportedProtocols;
    NSMutableArray *_profileStates;
    unsigned int _ciSessionRef;
    unsigned int _maxSysExSize;
    unsigned char _maxRequests;
}

@property (copy, nonatomic) id /* block */ propertyChangedCallback;
@property (copy, nonatomic) id /* block */ propertyResponseCallback;
@property (copy, nonatomic) id /* block */ disconnectBlock;
@property (copy, nonatomic) id /* block */ profileSpecificDataBlock;
@property (readonly, nonatomic) struct MIDICIDeviceIdentification { unsigned char manufacturer[3]; unsigned char family[2]; unsigned char modelNumber[2]; unsigned char revisionLevel[4]; unsigned char reserved[5]; } deviceID;
@property (copy, nonatomic) id /* block */ propertyResponseCallback;
@property (copy, nonatomic) id /* block */ propertyChangedCallback;
@property (readonly, nonatomic) unsigned int entity;
@property (readonly, nonatomic) unsigned int midiDestination;
@property (readonly, nonatomic) BOOL supportsProfileCapability;
@property (readonly, nonatomic) BOOL supportsPropertyCapability;
@property (readonly, nonatomic) MIDICIDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSNumber *maxSysExSize;
@property (readonly, nonatomic) NSNumber *maxPropertyRequests;
@property (copy, nonatomic) id /* block */ profileChangedCallback;
@property (copy, nonatomic) id /* block */ profileSpecificDataHandler;

+ (id)description;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithDiscoveredNode:(id)a0 dataReadyHandler:(id /* block */)a1 disconnectHandler:(id /* block */)a2;
- (id)initWithMIDIEntity:(unsigned int)a0 dataReadyHandler:(id /* block */)a1;
- (id)initWithMIDIDestination:(unsigned int)a0 dataReadyHandler:(id /* block */)a1 disconnectHandler:(id /* block */)a2 profileSpecificDataHandler:(id /* block */)a3;
- (id)initWithMIDIDestination:(unsigned int)a0 dataReadyHandler:(id /* block */)a1;
- (void)handleCINotification:(const struct MIDINotification { int x0; unsigned int x1; } *)a0 withHandler:(id /* block */)a1;
- (id)profileStateForChannel:(unsigned char)a0;
- (BOOL)enableProfile:(id)a0 onChannel:(unsigned char)a1 error:(id *)a2;
- (BOOL)disableProfile:(id)a0 onChannel:(unsigned char)a1 error:(id *)a2;
- (BOOL)toggleProfile:(id)a0 onChannel:(unsigned char)a1 enabling:(BOOL)a2 error:(id *)a3;
- (BOOL)sendProfile:(id)a0 onChannel:(unsigned char)a1 profileData:(id)a2;
- (void)addProfileState:(char *)a0 length:(unsigned int)a1 channel:(unsigned char)a2;
- (BOOL)updateProfileStateForChannel:(unsigned char)a0 withProfile:(id)a1 enabled:(BOOL)a2;
- (void)hasProperty:(id)a0 onChannel:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)getProperty:(id)a0 onChannel:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)setProperty:(id)a0 onChannel:(unsigned char)a1 responseHandler:(id /* block */)a2;

@end
