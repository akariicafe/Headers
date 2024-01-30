@class NSString;

@interface CCUIPPTTest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long beginSignpost;
@property (readonly, nonatomic) unsigned long long endSignpost;

+ (id)testWithName:(id)a0 beginSignpost:(unsigned long long)a1 endSignpost:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithName:(id)a0 beginSignpost:(unsigned long long)a1 endSignpost:(unsigned long long)a2;

@end
