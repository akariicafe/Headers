@class NSData;

@interface VGMLFloatIOData : VGMLIOData

@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (const float *)getData;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)getSize;
- (id)initWithSize:(unsigned long long)a0 withData:(const float *)a1;

@end
