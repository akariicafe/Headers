@class NSString, NSNumber, AXMIDIDeviceEntity;

@interface AXMIDIDeviceEntityEndpoint : NSObject

@property (nonatomic) unsigned int midiEndpoint;
@property (weak, nonatomic) AXMIDIDeviceEntity *entity;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSNumber *uniqueID;
@property (readonly, nonatomic) NSNumber *receiveChannels;
@property (readonly, nonatomic) NSNumber *transmitChannels;
@property (readonly, nonatomic) NSNumber *isEmbedded;
@property (readonly, nonatomic) NSNumber *isBroadcast;
@property (readonly, nonatomic) NSNumber *isOffline;
@property (readonly, nonatomic) NSNumber *isPrivate;
@property (readonly, nonatomic) NSString *driverName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMIDIEndpoint:(unsigned int)a0 entity:(id)a1;

@end
