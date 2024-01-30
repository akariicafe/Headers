@class NSString;
@protocol DESMetadataEncoder;

@interface DESMetadataSchema : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) int outputType;
@property (readonly, nonatomic) long long buckets;
@property (readonly, nonatomic) NSString *desc;
@property (readonly, nonatomic) id<DESMetadataEncoder> encoder;

- (void).cxx_destruct;
- (id)initWith:(id)a0 key:(id)a1 attachments:(id)a2 error:(id *)a3;

@end
