@class NSString;

@interface CNUIFamilyMemberContactItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *detailLabel;
@property (readonly, nonatomic, getter=isUnreachable) BOOL unreachable;

+ (id)typeLabelStringFromContactType:(long long)a0;
+ (id)familyMemberContactItemFromCoreFamilyMemberContactItem:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactIdentifier:(id)a0 label:(id)a1 detailLabel:(id)a2 unreachable:(BOOL)a3;
- (id)initWithLabel:(id)a0 detailLabel:(id)a1 unreachable:(BOOL)a2;

@end
