@class NSUUID, NSString;

@interface BNPresentableIdentification : NSObject <BNPresentableUniquelyIdentifying, BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)uniqueIdentificationForPresentable:(id)a0;
+ (id)identificationWithRequesterIdentifier:(id)a0;
+ (id)identificationWithRequesterIdentifier:(id)a0 requestIdentifier:(id)a1;
+ (id)identificationWithRequesterIdentifier:(id)a0 requestIdentifier:(id)a1 uniqueIdentifier:(id)a2;
+ (id)genericIdentificationForPresentable:(id)a0;
+ (id)requesterIdentificationForPresentable:(id)a0;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequesterIdentifier:(id)a0 requestIdentifier:(id)a1 uniqueIdentifier:(id)a2;

@end
