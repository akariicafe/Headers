@class NSString, NSDictionary;

@interface WBSCyclerItemRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *extraAttributes;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 uniqueIdentifier:(id)a1;
- (id)pairsOfItemsWithDifferingExtraAttributesComparedTo:(id)a0;

@end
