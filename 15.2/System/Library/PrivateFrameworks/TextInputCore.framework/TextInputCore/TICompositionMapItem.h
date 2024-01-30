@class NSString;

@interface TICompositionMapItem : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;

+ (id)itemWithKey:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
