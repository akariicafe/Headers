@class NSString, NSMutableSet, AXMIDIParser;

@interface AXMIDIManager : NSObject <AXMIDIDeviceProtocol>

@property (retain, nonatomic) AXMIDIParser *parser;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSMutableSet *devices;
@property (nonatomic) unsigned int midiClientRef;
@property (nonatomic) unsigned int midiInputPortRef;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)device:(id)a0 entity:(id)a1 didRemoveDestination:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 eventHandler:(id /* block */)a1;
- (void)_handleObjectAddedNotification:(struct MIDIObjectAddRemoveNotification { int x0; unsigned int x1; unsigned int x2; int x3; unsigned int x4; int x5; } *)a0;
- (void)_handleObjectRemovedNotification:(struct MIDIObjectAddRemoveNotification { int x0; unsigned int x1; unsigned int x2; int x3; unsigned int x4; int x5; } *)a0;
- (void)_handlePropertyChangedNotification:(struct MIDIObjectPropertyChangeNotification { int x0; unsigned int x1; unsigned int x2; int x3; struct __CFString *x4; } *)a0;
- (void)_resetAndDetectDevices;
- (void)dealloc;
- (void)_handleThruConnectionsChangedNotification:(struct MIDIObjectPropertyChangeNotification { int x0; unsigned int x1; unsigned int x2; int x3; struct __CFString *x4; } *)a0;
- (void)_handleSerialPortOwnerChangedNotification:(struct MIDIObjectPropertyChangeNotification { int x0; unsigned int x1; unsigned int x2; int x3; struct __CFString *x4; } *)a0;
- (void)_handleIOErrorNotification:(struct MIDIIOErrorNotification { int x0; unsigned int x1; unsigned int x2; int x3; } *)a0;
- (id)_nameForMidiObjectType:(int)a0;
- (id)_deviceForMidiDevice:(unsigned int)a0 addIfNeeded:(BOOL)a1;
- (void)_addMidiSource:(unsigned int)a0;
- (void)_addMidiDestination:(unsigned int)a0;
- (void)_removeMidiDevice:(unsigned int)a0;
- (void)_removeMidiEntity:(unsigned int)a0;
- (void)_removeMidiSource:(unsigned int)a0;
- (void)_removeMidiDestination:(unsigned int)a0;
- (void)printAttachedDevices;
- (void)_addMidiEntity:(unsigned int)a0;
- (void)device:(id)a0 didRemoveEntity:(id)a1;
- (void)device:(id)a0 didAddEntity:(id)a1;
- (void)device:(id)a0 entity:(id)a1 didAddSource:(id)a2;
- (void)device:(id)a0 entity:(id)a1 didRemoveSource:(id)a2;
- (void)device:(id)a0 entity:(id)a1 didAddDestination:(id)a2;

@end
