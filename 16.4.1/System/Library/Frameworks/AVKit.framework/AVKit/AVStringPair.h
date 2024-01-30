@class NSString;

@interface AVStringPair : NSObject

@property (readonly, nonatomic) NSString *first;
@property (readonly, nonatomic) NSString *second;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 separatedByString:(id)a1;
- (BOOL)keyEquals:(id)a0;

@end
