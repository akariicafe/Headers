@interface FAFamilyMessageGroup : IAMMessageGroup

- (id)groupIdentifier;
- (BOOL)shouldPerformModalMessagePresentation;
- (id)contextPropertyWithName:(id)a0;
- (void)performModalMessagePresentation:(id)a0 fromViewController:(id)a1;

@end
