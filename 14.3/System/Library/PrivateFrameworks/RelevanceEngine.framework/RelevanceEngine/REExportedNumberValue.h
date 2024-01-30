@class NSNumber;

@interface REExportedNumberValue : REExportedValue {
    NSNumber *_number;
}

- (void).cxx_destruct;
- (id)initWithNumber:(id)a0;
- (unsigned long long)type;
- (id)numberValue;

@end
