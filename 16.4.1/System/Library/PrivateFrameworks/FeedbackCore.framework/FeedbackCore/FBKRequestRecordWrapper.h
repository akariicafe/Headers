@class FBKRequestRecord;

@interface FBKRequestRecordWrapper : NSObject

@property (retain, nonatomic) FBKRequestRecord *wrappedObject;
@property (nonatomic) BOOL isFailure;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 response:(id)a1 session:(id)a2 cookies:(id)a3 body:(id)a4 error:(id)a5;
- (id)initWithURL:(id)a0 httpMethod:(id)a1 responseData:(id)a2;

@end
