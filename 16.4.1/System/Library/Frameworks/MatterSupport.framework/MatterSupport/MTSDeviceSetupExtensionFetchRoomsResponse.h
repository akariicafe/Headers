@class NSArray;

@interface MTSDeviceSetupExtensionFetchRoomsResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSArray *rooms;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithRooms:(id)a0;

@end
