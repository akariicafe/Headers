@class NSString, NPKPassSelectionFieldDetectorAssertion;

@interface NPKRemotePassSelectionFieldDetectorListener : NPKPassSelectionFieldDetectorListener <NPKPassSelectionFieldDetectorAssertionDelegate> {
    NPKPassSelectionFieldDetectorAssertion *_assertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)passSelectionFieldDetectorAssertion:(id)a0 didEnterFieldForPassWithUniqueID:(id)a1;

@end
