@class NSData;

@interface _RWITCPRelayMessage : NSObject {
    BOOL _writtenHeader;
    unsigned long long _writtenPayloadOffset;
}

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, copy, nonatomic) NSData *payload;

+ (id)TCPRelayMessageWithPayload:(id)a0;
+ (id)TCPRelayMessageFromDataStream:(id)a0 error:(id *)a1;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (long long)write:(int)a0;
- (long long)writeLockdown:(struct _lockdown_connection { } *)a0;
- (long long)writeInternal:(id /* block */)a0;

@end
