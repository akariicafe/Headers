@class NSString;

@interface DNDClientEventSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)sourceWithDestinationIdentifier:(id)a0;
+ (id)sourceWithCNContactIdentifier:(id)a0;
+ (id)sourceWithPhoneNumber:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithValue:(id)a0 type:(unsigned long long)a1;

@end
