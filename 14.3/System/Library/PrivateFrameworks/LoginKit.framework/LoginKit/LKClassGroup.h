@class NSString, NSArray;

@interface LKClassGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *classGroupName;
@property (readonly, copy, nonatomic) NSArray *classes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToLKClassGroup:(id)a0;
- (id)initWithGroupName:(id)a0 classes:(id)a1;
- (id)initWithClassGroupDictionary:(id)a0 classesDictionaryByClassID:(id)a1;

@end
