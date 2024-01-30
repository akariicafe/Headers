@class NSDictionary;

@interface ATXInformationFeatureSet : NSObject <NSCopying> {
    NSDictionary *_features;
}

- (double)valueForFeature:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeatureDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
