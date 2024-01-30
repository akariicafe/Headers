@class IDSService, NSString, MRIDSConnectivityManager;

@interface MRIDSOutputStream : MRAVBufferedOutputStream {
    IDSService *_service;
    long long _type;
    NSString *_destination;
    NSString *_session;
    MRIDSConnectivityManager *_connection;
}

- (void).cxx_destruct;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithConnection:(id)a0 type:(long long)a1 destination:(id)a2 session:(id)a3;
- (BOOL)hasSpaceAvailable;

@end
