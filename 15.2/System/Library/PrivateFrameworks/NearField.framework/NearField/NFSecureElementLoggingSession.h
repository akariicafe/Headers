@class NSString;

@interface NFSecureElementLoggingSession : NFSession <NFSecureElementLoggingSessionCallbacks>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogs:(unsigned char)a0 forSEID:(id)a1 error:(id *)a2;
- (id)clearLogs:(unsigned char)a0 forSEID:(id)a1;
- (id)storeACLogs:(id)a0;

@end
