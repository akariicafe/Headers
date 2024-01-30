@class NSString, NSNumber;

@interface ASTUploadFilesItemEntry : NSObject

@property (retain, nonatomic) NSString *uploadId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *sig;
@property (retain, nonatomic) NSString *pubKeyDigest;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSString *uploadUrl;

- (void).cxx_destruct;
- (id)initWithId:(id)a0 andName:(id)a1 andSig:(id)a2 andPubKeyDigest:(id)a3 andStatus:(id)a4 andSize:(id)a5 andUploadUrl:(id)a6;

@end
