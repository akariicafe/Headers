@class NSString, PSIQueryToken;

@interface PXSearchTokenRepresentedObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PSIQueryToken *queryToken;
@property (readonly, nonatomic) NSString *priorityAssetUUID;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 queryToken:(id)a1;
- (id)initWithTitle:(id)a0 queryToken:(id)a1 priorityAssetUUID:(id)a2;
- (id)dictionaryForArchiving;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
