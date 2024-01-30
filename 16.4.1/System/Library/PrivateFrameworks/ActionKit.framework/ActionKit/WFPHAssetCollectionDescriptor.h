@class NSString;

@interface WFPHAssetCollectionDescriptor : MTLModel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0 localizedTitle:(id)a1;

@end
