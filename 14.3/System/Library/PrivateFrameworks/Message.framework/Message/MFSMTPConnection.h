@class NSString, MFSMTPResponse, NSMutableData, NSMutableArray;

@interface MFSMTPConnection : MFConnection {
    MFSMTPResponse *_lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    NSString *_saveSentMbox;
    int _originalSocketTimeout;
    long long _lastCommandTimestamp;
    id _delegate;
    BOOL _hideLoggedData;
    BOOL _useSaveSent;
    BOOL _dislikesSaveSentMbox;
}

- (id)domainName;
- (int)quit;
- (int)noop;
- (id)init;
- (void).cxx_destruct;
- (BOOL)authenticateUsingAccount:(id)a0;
- (BOOL)connectUsingAccount:(id)a0;
- (int)sendData:(id)a0;
- (id)authenticationMechanisms;
- (BOOL)authenticateUsingAccount:(id)a0 authenticator:(id)a1;
- (unsigned long long)maximumMessageBytes;
- (BOOL)supportsOutboxCopy;
- (int)rcptTo:(id)a0;
- (void)setDomainName:(id)a0;
- (int)_getReply;
- (void)abort;
- (void)setDelegate:(id)a0;
- (int)_sendData:(id)a0;
- (int)state;
- (int)sendBData:(id)a0;
- (id)lastResponseLine;
- (BOOL)_hasParameter:(id)a0 forKeyword:(id)a1;
- (BOOL)_supportsSaveSentExtension;
- (BOOL)_supportsExtension:(id)a0;
- (int)_sendCommand:(const char *)a0 length:(unsigned long long)a1 argument:(id)a2 trailer:(const char *)a3;
- (BOOL)_connectUsingAccount:(id)a0;
- (int)_doHandshakeUsingAccount:(id)a0;
- (int)_sendData:(id)a0 progressHandler:(id /* block */)a1;
- (const char *)_trailerForMailFromWithEmailAddressFormatStyle:(long long)a0;
- (id)_dataForCommand:(const char *)a0 length:(unsigned long long)a1 argument:(id)a2 trailer:(const char *)a3;
- (id)lastResponse;
- (BOOL)supportsChunking;
- (BOOL)supportsPipelining;
- (id)dataForMailFrom:(id)a0 emailFormatStyle:(long long)a1;
- (id)dataForRcptTo:(id)a0;
- (id)dataForDataCmd;
- (int)mailFrom:(id)a0 emailFormatStyle:(long long)a1;
- (void)_setLastResponse:(id)a0;
- (int)_sendBytes:(const char *)a0 length:(unsigned long long)a1 progressHandler:(id /* block */)a2;
- (int)_readResponseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 isContinuation:(BOOL *)a1;
- (BOOL)supportsSMTPUTF8;
- (BOOL)supportsEnhancedStatusCodes;
- (long long)timeLastCommandWasSent;
- (void)setUseSaveSent:(BOOL)a0 toFolder:(id)a1;
- (long long)mailFrom:(id)a0 recipients:(id)a1 withData:(id)a2 host:(id)a3 emailFormatStyle:(long long)a4 errorTitle:(id *)a5 errorMessage:(id *)a6 serverResponse:(id *)a7 displayError:(BOOL *)a8 errorCode:(int *)a9 errorUserInfo:(id *)a10;

@end
