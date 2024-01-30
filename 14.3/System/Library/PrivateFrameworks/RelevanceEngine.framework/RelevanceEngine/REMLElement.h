@class NSString, REFeatureMap;

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) REFeatureMap *featureMap;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 featureMap:(id)a1;

@end
