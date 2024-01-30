@class NSDictionary, NSURL, NSString;

@interface DESDodMLTaskResultContainer : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *JSONResult;
@property (readonly, nonatomic) NSURL *binaryResultURL;
@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) double duration;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSONResult:(id)a0 binaryResultURL:(id)a1 sandboxExtension:(id)a2 duration:(double)a3;
- (id)taskResultWithError:(id *)a0;

@end
