@interface HMFStringIndentation : HMFObject

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long level;

+ (id)indentationWithWidth:(unsigned long long)a0;
+ (id)indentation;

- (id)description;
- (id)initWithWidth:(unsigned long long)a0;
- (id)init;
- (id)indentationByLevels:(long long)a0;

@end
