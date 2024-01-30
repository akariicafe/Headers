@class NSString;

@interface REExportedStringValue : REExportedValue {
    NSString *_string;
}

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (unsigned long long)type;
- (id)stringValue;

@end
