@class NSString, BMItemType;

@interface BMItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *normalizedValue;
@property (readonly, copy, nonatomic) NSString *uniformIdentifier;
@property (nonatomic) unsigned long long absoluteSupport;
@property (readonly, nonatomic) BMItemType *type;
@property (readonly, copy, nonatomic) id value;

+ (id)itemWithType:(id)a0 stringValue:(id)a1;
+ (id)itemWithType:(id)a0 numberValue:(id)a1;
+ (id)itemWithType:(id)a0 UUIDValue:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(id)a0 value:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithType:(id)a0 value:(id)a1 absoluteSupport:(unsigned long long)a2;
- (id)initWithType:(id)a0 normalizedValue:(id)a1;

@end
