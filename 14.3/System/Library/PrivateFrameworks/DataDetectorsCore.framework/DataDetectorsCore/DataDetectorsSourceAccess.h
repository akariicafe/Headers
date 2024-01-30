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

- (void)fileForSourceRead:(id)a0 resourceType:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)filesForSourceRead:(id)a0 resourceType:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)writeSourceFromJSONFile:(id)a0 source:(id)a1 withReply:(id /* block */)a2;
- (void)writeSourceFromRawData:(id)a0 source:(id)a1 signature:(id)a2 withReply:(id /* block */)a3;
- (BOOL)privacyUserReadEntitled;
- (BOOL)privacyUserWriteEntitled;
- (BOOL)privacySystemWriteEntitled;
- (id)fileHandleForSourceRead:(int)a0 resourceType:(unsigned long long)a1;
- (BOOL)clientCanWriteSource:(int)a0;
- (BOOL)pushSourcesContent:(id)a0 forSource:(int)a1 signature:(id)a2;

@end
