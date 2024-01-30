@class NSString, NSError;
@protocol MRExternalDeviceTransportConnectionDelegate;

@interface MRExternalDeviceTransportConnection : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *destinationOutputDeviceUID;
@property (retain, nonatomic) NSString *destinationGroupUID;
@property (nonatomic) unsigned int options;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSError *error;
@property (weak, nonatomic) id<MRExternalDeviceTransportConnectionDelegate> delegate;

- (void)closeWithError:(id)a0;
- (void)close;
- (id)exportEndpoint:(id)a0;
- (id)exportEndpoints:(id)a0;
- (id)exportOutputDevices:(id)a0 endpoint:(id)a1;
- (void)_notifyDelegateDidReceiveData:(id)a0;
- (void)_notifyDelegateHasSpaceAvailable;
- (void)_notifyDelegateDidCloseWithError:(id)a0;
- (void).cxx_destruct;
- (id)exportOutputDevice:(id)a0 endpoint:(id)a1;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;

@end
