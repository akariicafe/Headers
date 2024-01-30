@class NSString;

@interface VKLogicDebugInfo : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long identifier;

- (id)initWithName:(id)a0 identifier:(unsigned long long)a1;
- (void)dealloc;

@end
