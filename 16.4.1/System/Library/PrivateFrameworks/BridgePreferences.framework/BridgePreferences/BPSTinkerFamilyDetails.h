@class FAFamilyMember;

@interface BPSTinkerFamilyDetails : NSObject

@property (retain, nonatomic) FAFamilyMember *tinkerFamilyMember;
@property (retain, nonatomic) FAFamilyMember *pairingParentFamilyMember;
@property (retain, nonatomic) FAFamilyMember *organizerParentFamilyMember;

- (void).cxx_destruct;

@end
