@class NSString, NSData;
@protocol SFCompanionAdvertiserDelegate;

@interface SFCompanionAdvertiser : NSObject

@property id<SFCompanionAdvertiserDelegate> delegate;
@property BOOL supportsStreams;
@property (readonly, copy) NSString *serviceType;
@property (readonly) NSData *serviceEndpointData;

- (void)start;
- (void).cxx_destruct;
- (void)getContinuationStreamsWithEndpointData:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)initWithServiceType:(id)a0;
- (void)stop;

@end
