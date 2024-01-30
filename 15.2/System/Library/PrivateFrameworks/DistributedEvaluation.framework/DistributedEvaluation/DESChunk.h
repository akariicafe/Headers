@class NSString, NSNumber, NSMutableData;

@interface DESChunk : NSObject

@property (readonly, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *clippingBound;
@property (readonly, nonatomic) NSMutableData *data;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithKey:(id)a0 clippingBound:(id)a1 data:(id)a2;

@end
