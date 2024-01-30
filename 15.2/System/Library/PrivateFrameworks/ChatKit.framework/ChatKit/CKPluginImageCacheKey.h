@class NSString;

@interface CKPluginImageCacheKey : NSObject

@property (retain, nonatomic) NSString *stringIdentifier;
@property (nonatomic) long long integerIdentifier;

+ (id)keyWithStringIdentifier:(id)a0 integerIdentifier:(long long)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStringIdentifier:(id)a0 integerIdentifier:(long long)a1;

@end
