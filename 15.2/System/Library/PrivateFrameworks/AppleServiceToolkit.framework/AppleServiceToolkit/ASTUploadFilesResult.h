@class NSString, NSArray;

@interface ASTUploadFilesResult : NSObject

@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSArray *certs;
@property (retain, nonatomic) NSArray *files;

+ (id)resultFromSource:(id)a0 andUploadDictionaries:(id)a1;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)generatePayload;
- (id)initWithSource:(id)a0 andCerts:(id)a1 andFiles:(id)a2;

@end
