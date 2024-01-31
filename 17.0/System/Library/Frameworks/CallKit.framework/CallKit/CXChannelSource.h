@class NSString;
@protocol CXChannelSourceDelegate;

@interface CXChannelSource : CXAbstractProviderSource <CXChannelProviderVendorProtocol>

@property (weak, nonatomic) id<CXChannelSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)handleAudioSessionActivationStateChangedTo:(id)a0;

@end
