@class NSString;

@interface MontrealLogIndent : NSObject

@property (readonly) NSString *step;
@property (readonly) unsigned long long factor;
@property (readonly) NSString *level;

+ (id)indentWithLevel:(id)a0;
+ (id)indentWithLevel:(id)a0 step:(id)a1 factor:(unsigned long long)a2;

- (id)description;
- (void).cxx_destruct;
- (id)indentByFactor:(unsigned long long)a0;
- (id)initWithLevel:(id)a0 step:(id)a1 factor:(unsigned long long)a2;

@end
