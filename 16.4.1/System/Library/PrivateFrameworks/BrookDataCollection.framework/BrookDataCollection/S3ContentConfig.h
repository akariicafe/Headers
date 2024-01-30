@class NSString;

@interface S3ContentConfig : NSObject

@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *bucket;

- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 bucket:(id)a1;

@end
