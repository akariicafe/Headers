@class NSString, NSSet;

@interface CDMOvertonKGSpanValue : CDMSpanValue {
    NSString *_entityName;
    NSSet *_features;
    double _confidence;
}

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithEntityID:(id)a0 entityName:(id)a1 features:(id)a2 confidence:(double)a3;

@end
