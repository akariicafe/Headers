@class NSString, IDSDevice;

@interface HDIDSParticipant : NSObject

@property (readonly, nonatomic) IDSDevice *device;
@property (readonly, copy, nonatomic) NSString *destinationIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;

- (id)initWithDevice:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)description;

@end
