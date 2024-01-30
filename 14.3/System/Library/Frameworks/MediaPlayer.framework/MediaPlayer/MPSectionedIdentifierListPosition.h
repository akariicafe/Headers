@class NSString;

@interface MPSectionedIdentifierListPosition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) long long entryType;

+ (id)positionForItem:(id)a0 inSection:(id)a1;
+ (id)positionForHeadOfSection:(id)a0;
+ (id)positionForTailOfSection:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
