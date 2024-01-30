@class RETaggedFeatureValueArray;

@interface RERelevanceValue : NSObject <NSCopying, REAutomaticExportedInterface> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) RETaggedFeatureValueArray *values;
@property (readonly, nonatomic, getter=isHistoric) BOOL historic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithValues:(id)a0 isHistoric:(BOOL)a1;

@end
