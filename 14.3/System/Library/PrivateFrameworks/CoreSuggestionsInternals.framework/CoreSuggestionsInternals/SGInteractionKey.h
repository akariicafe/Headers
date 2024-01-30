@class NSString;

@interface SGInteractionKey : SGMessageKey

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *personHandle;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)init;
- (id)description;
- (id)initWithSource:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithBundleId:(id)a0 personHandle:(id)a1;

@end
