@class NSString, PSIQueryToken;

@interface PXSearchTokenRepresentedObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PSIQueryToken *queryToken;
@property (readonly, nonatomic) NSString *priorityAssetUUID;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 queryToken:(id)a1;
- (id)initWithTitle:(id)a0 queryToken:(id)a1 priorityAssetUUID:(id)a2;
- (id)dictionaryForArchiving;

@end
