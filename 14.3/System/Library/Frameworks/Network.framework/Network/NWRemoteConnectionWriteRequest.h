@class NSData, NSUUID;

@interface NWRemoteConnectionWriteRequest : NSObject

@property (retain) NSData *data;
@property (retain) NSUUID *clientID;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 clientID:(id)a1;

@end
