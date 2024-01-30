@class NSDictionary, NSData, NSURL;

@interface DESInternalDodMLTaskResult : NSObject

@property (readonly, nonatomic) NSDictionary *JSONResult;
@property (readonly, nonatomic) NSData *binaryResult;
@property (readonly, nonatomic) BOOL deferred;
@property (readonly, nonatomic) NSURL *deferralURL;
@property (readonly, nonatomic) double duration;

- (id)description;
- (void).cxx_destruct;
- (id)initWithJSONResult:(id)a0 binaryResult:(id)a1 deferred:(BOOL)a2 deferralURL:(id)a3 duration:(double)a4;

@end
