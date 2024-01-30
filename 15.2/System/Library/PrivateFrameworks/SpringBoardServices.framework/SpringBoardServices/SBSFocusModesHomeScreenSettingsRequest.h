@class NSString, NSArray;

@interface SBSFocusModesHomeScreenSettingsRequest : NSObject <BSDescriptionProviding, BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSString *focusModeIdentifier;
@property (retain, nonatomic) NSArray *listsToAdd;
@property (retain, nonatomic) NSArray *listsToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithFocusModeIdentifier:(id)a0;

@end
