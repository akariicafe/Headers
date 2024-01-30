@class NSString, REFeatureMap;

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) REFeatureMap *featureMap;

- (id)description;
- (id)initWithIdentifier:(id)a0 featureMap:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
