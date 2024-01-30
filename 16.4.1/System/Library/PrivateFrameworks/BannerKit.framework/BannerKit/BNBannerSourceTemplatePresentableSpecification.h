@class NSString, NSUUID;
@protocol BNTemplateViewProviding, BNTemplateItemProviding;

@interface BNBannerSourceTemplatePresentableSpecification : BNBannerSourcePresentableSpecification <BNTemplateContentProvidingSpecifying>

@property (retain, nonatomic) id<BNTemplateViewProviding> leadingTemplateViewProvider;
@property (retain, nonatomic) id<BNTemplateViewProviding> trailingTemplateViewProvider;
@property (retain, nonatomic) id<BNTemplateItemProviding> primaryTemplateItemProvider;
@property (retain, nonatomic) id<BNTemplateItemProviding> secondaryTemplateItemProvider;
@property (copy, nonatomic) NSString *presentableAccessibilityIdentifier;
@property (readonly, nonatomic) long long contentBehavior;
@property (readonly, nonatomic) long long presentableBehavior;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentOutsets;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) BOOL providesTemplateContent;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
