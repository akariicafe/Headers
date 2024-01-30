@class NSString, NSDictionary;

@interface PSGOperationalPredictedItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *operationData;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItemIdentifier:(id)a0 value:(id)a1 bundleIdentifier:(id)a2 operationData:(id)a3;

@end
