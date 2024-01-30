@class NSString, MRIDSConnectivityManager;

@interface MRIDSInputStream : MRAVBufferedInputStream {
    MRIDSConnectivityManager *_connection;
    long long _type;
    NSString *_destination;
    NSString *_session;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnection:(id)a0 type:(long long)a1 destination:(id)a2 session:(id)a3;

@end
