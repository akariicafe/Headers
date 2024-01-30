@class NSString, NPKPassSelectionFieldDetectorAssertion;

@interface NPKRemotePassSelectionFieldDetectorListener : NPKPassSelectionFieldDetectorListener <NPKPassSelectionFieldDetectorAssertionDelegate> {
    NPKPassSelectionFieldDetectorAssertion *_assertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)passSelectionFieldDetectorAssertion:(id)a0 didEnterFieldForPassWithUniqueID:(id)a1;

@end
