@class NSArray, NSDictionary, ASTUploadFilesResult, NSNumber;

@interface ASTTestResult : ASTSealablePayload

@property (retain, nonatomic) NSDictionary *predicates;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSNumber *testId;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSArray *files;
@property (retain, nonatomic) ASTUploadFilesResult *uploadFiles;
@property (nonatomic) double testDuration;
@property (retain, nonatomic) NSNumber *allowCellularSizeThreshold;

+ (id)resultWithTestId:(id)a0 parameters:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)generatePayload;
- (BOOL)sealWithFileSigner:(id /* block */)a0 error:(id *)a1;
- (void)sealWithSealableFiles:(id)a0;
- (void)sealWithPayload:(id)a0 signature:(id)a1;
- (id)initWithTestId:(id)a0 parameters:(id)a1;
- (void)setUploadStatusFromSource:(id)a0 withArray:(id)a1;

@end
