@interface PromotedContent.PrimitiveCreator : NSObject <APMetricPrimitiveCreating> {
    void /* unknown type, empty encoding */ promotedContentIdentifier;
    void /* unknown type, empty encoding */ contextIdentifier;
    void /* unknown type, empty encoding */ journeyIdentifier;
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ receiver;
    void /* unknown type, empty encoding */ pendingMetrics;
}

- (id)init;
- (void)recordMetric:(long long)a0 forPurpose:(long long)a1 properties:(id)a2 internalProperties:(id)a3 options:(long long)a4;
- (void).cxx_destruct;

@end
