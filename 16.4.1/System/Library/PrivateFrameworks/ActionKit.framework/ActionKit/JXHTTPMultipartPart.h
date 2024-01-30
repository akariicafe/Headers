@class NSString, NSData;

@interface JXHTTPMultipartPart : NSObject

@property (nonatomic) int multipartType;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *preData;
@property (retain, nonatomic) NSData *contentData;
@property (retain, nonatomic) NSData *postData;

+ (id)withMultipartType:(int)a0 key:(id)a1 data:(id)a2 contentType:(id)a3 fileName:(id)a4 boundary:(id)a5;

- (long long)contentLength;
- (id)filePath;
- (long long)dataLength;
- (void).cxx_destruct;
- (unsigned long long)loadMutableData:(id)a0 withDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
