@class NSString;

@interface CKPluginImageCacheKey : NSObject

@property (retain, nonatomic) NSString *stringIdentifier;
@property (nonatomic) long long integerIdentifier;

+ (id)keyWithStringIdentifier:(id)a0 integerIdentifier:(long long)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithStringIdentifier:(id)a0 integerIdentifier:(long long)a1;

@end
