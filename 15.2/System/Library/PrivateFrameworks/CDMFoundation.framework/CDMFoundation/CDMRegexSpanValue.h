@class NSDictionary;

@interface CDMRegexSpanValue : CDMSpanValue {
    NSDictionary *_values;
}

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0 values:(id)a1;

@end
