@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {
    HIDAnalyticsHistogramEventField *_field;
    BOOL _isUpdated;
}

- (id)initWithAttributes:(id)a0 description:(id)a1;
- (void)setIntegerValue:(unsigned long long)a0;
- (void)addField:(id)a0;
- (id)value;
- (void)addHistogramFieldWithSegments:(id)a0 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; } *)a1 count:(long long)a2;
- (void)setIntegerValue:(unsigned long long)a0 forField:(id)a1;
- (void).cxx_destruct;
- (void)setValue:(id)a0;

@end
