@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol> {
    BOOL _privacyUserReadEntitled;
    unsigned char _privacyUserReadEntitlementChecked;
    BOOL _privacyUserWriteEntitled;
    unsigned char _privacyUserWriteEntitlementChecked;
    BOOL _privacySystemWriteEntitled;
    unsigned char _privacySystemWriteEntitlementChecked;
}

@property struct { unsigned int val[8]; } auditToken;
@property int processIdentifier;
@property unsigned int userIdentifier;

- (BOOL)clientCanWriteSource:(int)a0;
- (void)fileForSourceRead:(id)a0 resourceType:(unsigned long long)a1 withReply:(id /* block */)a2;
- (id)fileHandleForSourceRead:(int)a0 resourceType:(unsigned long long)a1;
- (void)filesForSourceRead:(id)a0 resourceType:(unsigned long long)a1 withReply:(id /* block */)a2;
- (BOOL)privacySystemWriteEntitled;
- (BOOL)privacyUserReadEntitled;
- (BOOL)privacyUserWriteEntitled;
- (BOOL)pushSourcesContent:(id)a0 forSource:(int)a1 signature:(id)a2;
- (void)writeSourceFromJSONFile:(id)a0 source:(id)a1 withReply:(id /* block */)a2;
- (void)writeSourceFromRawData:(id)a0 source:(id)a1 signature:(id)a2 withReply:(id /* block */)a3;

@end
