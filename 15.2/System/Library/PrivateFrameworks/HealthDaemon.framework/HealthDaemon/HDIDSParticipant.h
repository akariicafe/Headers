@class NSString, IDSDevice;

@interface HDIDSParticipant : NSObject

@property (readonly, nonatomic) IDSDevice *device;
@property (readonly, copy, nonatomic) NSString *destinationIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;

- (id)initWithIdentifier:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
