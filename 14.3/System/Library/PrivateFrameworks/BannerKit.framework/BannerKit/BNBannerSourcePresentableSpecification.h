@class NSUUID, NSString;

@interface BNBannerSourcePresentableSpecification : BNPresentableIdentification <BNPresentableSpecifying>

@property (nonatomic) long long presentableType;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentOutsets;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
