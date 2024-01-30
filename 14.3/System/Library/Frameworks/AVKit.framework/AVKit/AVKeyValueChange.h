@class NSString;

@interface AVKeyValueChange : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) id oldValue;
@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id observationToken;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 oldValue:(id)a1 keyPath:(id)a2 observationToken:(id)a3;

@end
