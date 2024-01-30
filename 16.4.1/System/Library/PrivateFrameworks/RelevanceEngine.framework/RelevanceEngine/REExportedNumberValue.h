@class NSNumber;

@interface REExportedNumberValue : REExportedValue {
    NSNumber *_number;
}

- (id)numberValue;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithNumber:(id)a0;

@end
