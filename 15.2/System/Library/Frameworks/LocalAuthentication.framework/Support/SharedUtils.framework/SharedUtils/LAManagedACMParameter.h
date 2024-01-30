@class NSMutableData, NSString;

@interface LAManagedACMParameter : NSObject {
    NSString *_description;
}

@property (readonly, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) struct { unsigned int x0; void *x1; unsigned int x2; } *acmParameter;

+ (id)acmParameterWithTimeOffset:(unsigned int)a0;
+ (id)acmParameterWithUserId:(unsigned int)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithACMParamType:(unsigned int)a0 bytes:(void *)a1 length:(unsigned long long)a2 description:(id)a3;

@end
