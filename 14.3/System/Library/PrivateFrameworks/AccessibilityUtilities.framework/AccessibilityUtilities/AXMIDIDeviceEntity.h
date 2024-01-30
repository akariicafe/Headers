@class NSString, AXMIDIDevice, NSMutableSet, NSNumber;

@interface AXMIDIDeviceEntity : NSObject

@property (nonatomic) unsigned int midiEntity;
@property (retain, nonatomic) NSMutableSet *sources;
@property (retain, nonatomic) NSMutableSet *destinations;
@property (weak, nonatomic) AXMIDIDevice *device;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *uniqueID;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSNumber *isEmbedded;
@property (readonly, nonatomic) NSNumber *isBroadcast;
@property (readonly, nonatomic) NSNumber *isOffline;
@property (readonly, nonatomic) NSNumber *isPrivate;
@property (readonly, nonatomic) NSString *driverName;
@property (readonly, nonatomic) NSNumber *supportsGeneralMIDI;
@property (readonly, nonatomic) NSNumber *supportsMMC;

- (void).cxx_destruct;
- (id)description;
- (id)_sourceForMidiEndpoint:(unsigned int)a0 addIfNeeded:(BOOL)a1;
- (id)_destinationForMidiEndpoint:(unsigned int)a0 addIfNeeded:(BOOL)a1;
- (void)addMidiSource:(unsigned int)a0;
- (void)removeMidiSource:(unsigned int)a0;
- (void)addMidiDestination:(unsigned int)a0;
- (void)removeMidiDestination:(unsigned int)a0;
- (id)initWithMIDIEntity:(unsigned int)a0 device:(id)a1;
- (void)resetAndDetectEndpoints;
- (id)supportsGeneralMMC;

@end
