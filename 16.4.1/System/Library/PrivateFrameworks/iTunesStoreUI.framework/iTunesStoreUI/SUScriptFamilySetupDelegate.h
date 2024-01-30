@class NSString;

@interface SUScriptFamilySetupDelegate : NSObject <AAUIFamilySetupDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)familySetupViewController:(id)a0 didCompleteWithSuccess:(BOOL)a1;

@end
