@class NSString, NSDictionary;

@interface WBSCyclerBookmarkRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *extraAttributes;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 uniqueIdentifier:(id)a1;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
