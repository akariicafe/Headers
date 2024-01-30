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

+ (id)log;

- (unsigned long long)state;
- (void)abort;
- (void)setDomainName:(id)a0;
- (id)domainName;
- (void)setDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)sendData:(id)a0;
- (long long)mailFrom:(id)a0 recipients:(id)a1 withData:(id)a2 host:(id)a3 emailFormatStyle:(long long)a4 errorTitle:(id *)a5 errorMessage:(id *)a6 serverResponse:(id *)a7 displayError:(BOOL *)a8 errorCode:(int *)a9 errorUserInfo:(id *)a10;
- (unsigned long long)rcptTo:(id)a0;
- (BOOL)_connectUsingAccount:(id)a0;
- (id)_dataForCommand:(const char *)a0 length:(unsigned long long)a1 argument:(id)a2 trailer:(const char *)a3;
- (unsigned long long)_doHandshakeUsingAccount:(id)a0;
- (unsigned long long)_getReply;
- (BOOL)_hasParameter:(id)a0 forKeyword:(id)a1;
- (unsigned long long)_readResponseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 isContinuation:(BOOL *)a1;
- (unsigned long long)_sendBytes:(const char *)a0 length:(unsigned long long)a1 progressHandler:(id /* block */)a2;
- (unsigned long long)_sendCommand:(const char *)a0 length:(unsigned long long)a1 argument:(id)a2 trailer:(const char *)a3;
- (unsigned long long)_sendData:(id)a0;
- (unsigned long long)_sendData:(id)a0 progressHandler:(id /* block */)a1;
- (void)_setLastResponse:(id)a0;
- (BOOL)_supportsExtension:(id)a0;
- (BOOL)_supportsSaveSentExtension;
- (const char *)_trailerForMailFromWithEmailAddressFormatStyle:(long long)a0;
- (BOOL)authenticateUsingAccount:(id)a0;
- (BOOL)authenticateUsingAccount:(id)a0 authenticator:(id)a1;
- (id)authenticationMechanisms;
- (BOOL)connectUsingAccount:(id)a0;
- (id)dataForDataCmd;
- (id)dataForMailFrom:(id)a0 emailFormatStyle:(long long)a1;
- (id)dataForRcptTo:(id)a0;
- (id)lastResponse;
- (id)lastResponseLine;
- (unsigned long long)mailFrom:(id)a0 emailFormatStyle:(long long)a1;
- (unsigned long long)maximumMessageBytes;
- (unsigned long long)noop;
- (unsigned long long)quit;
- (unsigned long long)sendBData:(id)a0;
- (void)setUseSaveSent:(BOOL)a0 toFolder:(id)a1;
- (BOOL)supportsChunking;
- (BOOL)supportsEnhancedStatusCodes;
- (BOOL)supportsOutboxCopy;
- (BOOL)supportsPipelining;
- (BOOL)supportsSMTPUTF8;
- (long long)timeLastCommandWasSent;

@end
