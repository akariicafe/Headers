@class NSString;

@interface _REConcreteFeature : REFeature {
    NSString *_name;
    unsigned long long _featureType;
}

- (unsigned long long)featureType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)name;
- (long long)_bitCount;
- (id)_rootFeatures;
- (id)initWithName:(id)a0 featureType:(unsigned long long)a1;

@end
