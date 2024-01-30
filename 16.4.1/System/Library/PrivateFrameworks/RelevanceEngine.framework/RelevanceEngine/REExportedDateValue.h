@class NSDate;

@interface REExportedDateValue : REExportedValue {
    NSDate *_date;
}

- (id)dateValue;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;

@end
