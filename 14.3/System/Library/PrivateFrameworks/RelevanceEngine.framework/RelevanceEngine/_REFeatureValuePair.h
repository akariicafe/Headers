@class REFeature, NSArray;

@interface _REFeatureValuePair : NSObject

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) unsigned long long value;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *rootFeatures;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeature:(id)a0 value:(unsigned long long)a1 index:(unsigned long long)a2 rootFeatures:(id)a3;

@end
