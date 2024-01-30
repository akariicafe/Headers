@class WBSCRDTPosition;

@interface WBBookmarkLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int parentID;
@property (readonly, copy, nonatomic) WBSCRDTPosition *position;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)locationWithPosition:(id)a0;
- (id)locationWithParentID:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithParentID:(int)a0 position:(id)a1;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
