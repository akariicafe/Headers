@class NSString;

@interface _REConcreteFeature : REFeature {
    NSString *_name;
    unsigned long long _featureType;
}

- (long long)_bitCount;
- (id)initWithName:(id)a0 featureType:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (unsigned long long)hash;
- (id)_rootFeatures;
- (unsigned long long)featureType;

@end
