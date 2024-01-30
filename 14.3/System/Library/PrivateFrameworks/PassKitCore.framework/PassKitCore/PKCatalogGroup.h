@class NSNumber, NSMutableArray;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSMutableArray *uniqueIDs;
@property (nonatomic) BOOL isUbiquitous;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToGroup:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
