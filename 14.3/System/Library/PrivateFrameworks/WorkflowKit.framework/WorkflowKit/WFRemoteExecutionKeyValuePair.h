@class NSString;

@interface WFRemoteExecutionKeyValuePair : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
