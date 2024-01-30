@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUSUIUpdateAgreementManager : NSObject {
    NSMutableDictionary *_updateAgreementDict;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)_queue_agreementDictForDescriptor:(id)a0;
- (int)_queue_agreementDictValueForKey:(id)a0 forDescriptor:(id)a1;
- (void)_queue_setAgreementDictValue:(int)a0 forKey:(id)a1 forDescriptor:(id)a2;
- (int)cellularFeeAgreementStatusForUpdate:(id)a0;
- (void)setCellularFeeAgreementStatus:(int)a0 forUpdate:(id)a1;
- (void)setTermsAgreementStatus:(int)a0 forUpdate:(id)a1;
- (int)termsAgreementStatusForUpdate:(id)a0;

@end
