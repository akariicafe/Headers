@class NSArray, PKPaymentProvisioningController, NSIndexSet, NSString, NSMutableIndexSet;

@interface PKPaymentSetupAssistantCoreProvisioningContext : NSObject <PKPaymentProvisioningControllerDelegate> {
    NSMutableIndexSet *_mutableSelectedIndices;
    unsigned long long _maximumSelectable;
}

@property (readonly, retain, nonatomic) NSArray *setupAssistantCoreCredentials;
@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, retain, nonatomic) NSIndexSet *selectedIndices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)canSelectIndex:(unsigned long long)a0;
- (id)availablePaymentCredentials;
- (id)initWithProvisioningController:(id)a0 setupAssistantCredentials:(id)a1 maximumSelectable:(unsigned long long)a2;
- (BOOL)selectIndex:(unsigned long long)a0;

@end
