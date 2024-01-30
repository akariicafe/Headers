@class NSString;
@protocol NRTermsAcknowledgementRegistry;

@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry> {
    id<NRTermsAcknowledgementRegistry> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorStringWithEnum:(unsigned long long)a0;
+ (id)errorWithEnum:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)add:(id)a0 forDeviceID:(id)a1 withCompletion:(id /* block */)a2;
- (void)checkForAcknowledgement:(id)a0 forDeviceID:(id)a1 withCompletion:(id /* block */)a2;

@end
