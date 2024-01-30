@interface FAFamilyMessageGroup : IAMMessageGroup

- (id)groupIdentifier;
- (id)contextPropertyWithName:(id)a0;
- (void)performModalMessagePresentation:(id)a0 fromViewController:(id)a1;
- (BOOL)shouldPerformModalMessagePresentation;

@end
