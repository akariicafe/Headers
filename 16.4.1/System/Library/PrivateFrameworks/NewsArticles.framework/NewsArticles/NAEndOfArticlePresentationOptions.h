@interface NAEndOfArticlePresentationOptions : NSObject {
    void /* unknown type, empty encoding */ suppressMoreFromSection;
    void /* unknown type, empty encoding */ suppressRelatedSection;
    void /* unknown type, empty encoding */ suppressRecommendedReadsSection;
    void /* unknown type, empty encoding */ articleBackgroundColor;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSuppressMoreFromSection:(BOOL)a0 suppressRelatedSection:(BOOL)a1 suppressRecommendedReadsSection:(long long)a2 articleBackgroundColor:(id)a3;

@end
