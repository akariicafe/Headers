@interface _SWCPatternMatchingResult : NSObject

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic, getter=isExcluded) BOOL excluded;

+ (id)new;

- (id)init;
- (id)_initWithIndex:(unsigned long long)a0 excluded:(BOOL)a1;

@end
