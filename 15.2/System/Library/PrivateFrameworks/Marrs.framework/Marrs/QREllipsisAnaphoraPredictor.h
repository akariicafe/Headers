@class NSString;

@interface QREllipsisAnaphoraPredictor : NSObject <QRPredictor> {
    struct unique_ptr<marrs::qr::orchestration::QueryRewriteOrchestrator, std::default_delete<marrs::qr::orchestration::QueryRewriteOrchestrator>> { struct __compressed_pair<marrs::qr::orchestration::QueryRewriteOrchestrator *, std::default_delete<marrs::qr::orchestration::QueryRewriteOrchestrator>> { struct QueryRewriteOrchestrator *__value_; } __ptr_; } plugin;
}

@property (copy, nonatomic) NSString *locale;

+ (id)predictorName;
+ (id)vocabFileName;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLocale:(id)a0 FilesPath:(id)a1 status:(id *)a2;
- (id)predictWithInput:(id)a0 status:(id *)a1;

@end
