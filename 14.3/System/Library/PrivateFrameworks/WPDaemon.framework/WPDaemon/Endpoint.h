@class NSUUID;

@interface Endpoint : NSObject

@property unsigned char requireAck;
@property BOOL requireEncyption;
@property (retain) NSUUID *clientUUID;

- (void).cxx_destruct;
- (id)description;

@end
