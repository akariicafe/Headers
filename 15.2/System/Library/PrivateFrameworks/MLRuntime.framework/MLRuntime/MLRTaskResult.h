@class NSDictionary, NSData;

@interface MLRTaskResult : NSObject

@property (readonly, nonatomic) NSDictionary *JSONResult;
@property (readonly, nonatomic) NSData *vector;

- (id)description;
- (void).cxx_destruct;
- (id)initWithJSONResult:(id)a0 unprivatizedVector:(id)a1;

@end
