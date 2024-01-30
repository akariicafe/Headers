@class NSString;

@interface S3AccessConfig : NSObject

@property (retain, nonatomic) NSString *AWSAccessKeyID;
@property (retain, nonatomic) NSString *AWSSecretAccessKey;

- (void).cxx_destruct;
- (id)initWithAWSAccessKeyID:(id)a0 AWSSecretAccessKey:(id)a1;

@end
