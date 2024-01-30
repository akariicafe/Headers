@class NSString;

@interface _REConcreteFeature : REFeature {
    NSString *_name;
    unsigned long long _featureType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (unsigned long long)featureType;
- (long long)_bitCount;
- (id)initWithName:(id)a0 featureType:(unsigned long long)a1;
- (id)_rootFeatures;

@end
