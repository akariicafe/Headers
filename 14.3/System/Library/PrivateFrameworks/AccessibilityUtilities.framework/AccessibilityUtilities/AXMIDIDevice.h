@class NSString, NSMutableSet, NSNumber;
@protocol AXMIDIDeviceProtocol;

@interface AXMIDIDevice : NSObject <AXMIDIDeviceEntityDelegate>

@property (nonatomic) unsigned int midiDevice;
@property (retain, nonatomic) NSMutableSet *entities;
@property (weak, nonatomic) id<AXMIDIDeviceProtocol> delegate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSNumber *uniqueID;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSNumber *isOffline;
@property (readonly, nonatomic) NSNumber *isPrivate;
@property (readonly, nonatomic) NSString *driverName;
@property (readonly, nonatomic) NSNumber *supportsGeneralMIDI;
@property (readonly, nonatomic) NSNumber *supportsMMC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fullDescription;
- (BOOL)isEqual:(id)a0;
- (id)_entityForMidiEntity:(unsigned int)a0 addIfNeeded:(BOOL)a1;
- (void)addMidiSource:(unsigned int)a0;
- (void)removeMidiSource:(unsigned int)a0;
- (void)addMidiDestination:(unsigned int)a0;
- (void)removeMidiDestination:(unsigned int)a0;
- (void)entity:(id)a0 didAddSource:(id)a1;
- (void)entity:(id)a0 didRemoveSource:(id)a1;
- (void)entity:(id)a0 didAddDestination:(id)a1;
- (void)entity:(id)a0 didRemoveDestination:(id)a1;
- (id)initWithMIDIDevice:(unsigned int)a0 delegate:(id)a1;
- (id)supportsGeneralMMC;
- (void)resetAndDetectEntities;
- (void)addMidiEntity:(unsigned int)a0;
- (void)removeMidiEntity:(unsigned int)a0;

@end
