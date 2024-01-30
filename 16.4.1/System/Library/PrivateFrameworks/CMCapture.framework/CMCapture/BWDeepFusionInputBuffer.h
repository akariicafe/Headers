@class NSDictionary;

@interface BWDeepFusionInputBuffer : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *buffer;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDictionary *metadata;

- (void)dealloc;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 type:(unsigned long long)a1 metadata:(id)a2;

@end
