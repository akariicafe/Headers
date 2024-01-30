@class NSString;

@interface HMDThreadRadioClient : HMFObject <HMDThreadRadioClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startThreadNetwork:(id)a0 completion:(id /* block */)a1;
- (void)stopThreadNetworkWithCompletion:(id /* block */)a0;

@end
