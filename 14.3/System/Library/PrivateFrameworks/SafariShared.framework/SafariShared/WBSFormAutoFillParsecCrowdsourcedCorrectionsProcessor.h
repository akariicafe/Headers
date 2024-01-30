@protocol WBSFormAutoFillCorrectionsStore;

@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject {
    id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
}

+ (id)_schemaWithExpectedClass:(Class)a0 errorCode:(long long)a1 isOptional:(BOOL)a2;
+ (id)_correctionsSchema;
+ (id)test_correctionsSchema;

- (void).cxx_destruct;
- (void)getLastCorrectionsRetrievalURLStringWithResultHandler:(id /* block */)a0;
- (void)setCorrectionsWithJSONData:(id)a0 retrievalURLString:(id)a1;
- (id)initWithCorrectionsStore:(id)a0;

@end
