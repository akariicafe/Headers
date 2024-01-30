@class NSString;

@interface REExportedStringValue : REExportedValue {
    NSString *_string;
}

- (id)stringValue;
- (unsigned long long)type;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;

@end
