@class NSData, NSUUID, NSPNetworkAgent;

@interface NPKey : NSObject

@property unsigned int session_counter;
@property int error;
@property (retain, nonatomic) NSData *info;
@property (retain, nonatomic) NSUUID *uuid;
@property unsigned int flags;
@property (readonly) NSPNetworkAgent *agentForKey;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;

@end
