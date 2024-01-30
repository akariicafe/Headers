@interface TIKeyboardActivityContext : NSObject

@property (nonatomic) unsigned long long fromState;
@property (nonatomic) unsigned long long toState;
@property (nonatomic) unsigned long long excessMemoryInBytes;

+ (id)contextFromState:(unsigned long long)a0 toState:(unsigned long long)a1;

@end
