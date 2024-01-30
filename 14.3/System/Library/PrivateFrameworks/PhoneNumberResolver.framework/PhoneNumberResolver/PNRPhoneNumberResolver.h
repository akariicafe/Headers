@class NSObject;
@protocol OS_dispatch_queue;

@interface PNRPhoneNumberResolver : NSObject {
    NSObject<OS_dispatch_queue> *_resolveQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolvePhoneNumbers:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)resolvePhoneNumbers:(id)a0 handler:(id /* block */)a1 queue:(id)a2;
- (void)_recordUsageAnalyticForCountryCode:(id)a0 success:(BOOL)a1;
- (id)_notAPhoneNumberError;
- (id)_notFullyQualifiedError;
- (id)resolveFullyQualifiedPhoneNumber:(id)a0 inCountry:(id)a1;
- (id)resolvePhoneNumber:(id)a0 countryCode:(id)a1 error:(id *)a2;

@end
