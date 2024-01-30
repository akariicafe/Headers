@class NSString, REFeatureMap;

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) REFeatureMap *featureMap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 featureMap:(id)a1;

@end
