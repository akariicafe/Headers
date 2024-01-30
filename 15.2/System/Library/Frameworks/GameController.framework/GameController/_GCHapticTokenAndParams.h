@class NSMutableArray;

@interface _GCHapticTokenAndParams : NSObject

@property (retain, nonatomic) NSMutableArray *params;
@property (readonly, nonatomic) unsigned long long token;

- (void).cxx_destruct;
- (id)initWithHapticCommand:(const void *)a0;

@end
