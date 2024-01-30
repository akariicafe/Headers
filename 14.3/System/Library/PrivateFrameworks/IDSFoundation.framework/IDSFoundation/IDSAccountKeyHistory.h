@class NSArray;

@interface IDSAccountKeyHistory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *entries;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntries:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
