@class NSUUID;

@interface Endpoint : NSObject

@property unsigned char requireAck;
@property BOOL requireEncyption;
@property (retain) NSUUID *clientUUID;

- (id)description;
- (void).cxx_destruct;

@end
