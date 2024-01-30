@class NSDate;

@interface CDMDateTimeSpanValue : CDMSpanValue {
    NSDate *_date;
    double _duration;
}

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0;
- (id)initWithStringValue:(id)a0 date:(id)a1 duration:(double)a2;

@end
