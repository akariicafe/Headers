@class NSString;
@protocol CRKConfigurationSource;

@interface CRKCurrentPlatformProfileConfigurationSource : NSObject <CRKConfigurationSource> {
    id<CRKConfigurationSource> mBaseSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallbackQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchConfiguration:(id /* block */)a0;
- (id)makeMacOSConfigurationSourceWithCallbackQueue:(id)a0;
- (id)makeSourceForCurrentPlatformWithCallbackQueue:(id)a0;
- (id)makeiOSConfigurationSourceWithCallbackQueue:(id)a0;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;

@end
