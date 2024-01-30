@class NSURLConnection, NSData, NSError;

@interface QLThreadInvoker : NSObject {
    NSURLConnection *_connection;
    NSData *_data;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)connectionDidFailWithError:(id)a0;
- (void)connectionDidReceiveData:(id)a0;
- (void)connectionDidReceiveDataLengthReceived:(id)a0;
- (id)initWithConnection:(id)a0 data:(id)a1 error:(id)a2;

@end
