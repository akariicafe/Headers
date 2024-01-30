@class NSString, SBSystemApertureController, NSMapTable, NSHashTable;

@interface SBSystemAperturePresentableManager : NSObject <SAUILayoutObserving, SBPresentableIntercepting> {
    NSMapTable *_presentablesToElements;
    NSMapTable *_elementsToAssertions;
    NSHashTable *_elementsThatDidAppear;
}

@property (readonly, weak, nonatomic) SBSystemApertureController *elementRegistrar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_elementForPresentableCreatingIfNecessary:(id)a0 elementGenerator:(id /* block */)a1;
- (id)_existingAssertionForElement:(id)a0;
- (id)_existingElementForPresentableWithIdentification:(id)a0;
- (id)_existingPresentableWithIdentification:(id)a0;
- (id)_existingPresentablesWithIdentification:(id)a0;
- (void)_invalidateElement:(id)a0 withReason:(id)a1;
- (void)_noteElementDidAppear:(id)a0;
- (void)_noteElementDidDisappear:(id)a0 reason:(id)a1;
- (void)_noteElementDidInvalidate:(id)a0 reason:(id)a1;
- (id)_presentableElementForElementLayoutSpecifier:(id)a0;
- (void)_registerElement:(id)a0;
- (void)_removeAssertionForElement:(id)a0;
- (void)_removeElementForPresentableWithIdentification:(id)a0;
- (void)_removePresentableForElement:(id)a0;
- (void)elementLayoutSpecifier:(id)a0 layoutModeDidChange:(long long)a1 reason:(long long)a2;
- (id)initWithElementRegistrar:(id)a0;
- (id)revocationRequestedForPresentablesWithIdentification:(id)a0 reason:(id)a1;
- (BOOL)willInterceptPresentable:(id)a0 userInfo:(id)a1;

@end
