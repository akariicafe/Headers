@class NSMutableDictionary;

@interface IPFeatureData : IPFeature

@property unsigned long long type;
@property (retain) id value;
@property (readonly) NSMutableDictionary *contextDictionary;

+ (id)featureDataWithType:(unsigned long long)a0 value:(id)a1 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

- (void).cxx_destruct;
- (id)description;
- (id)nGramMarker;

@end
