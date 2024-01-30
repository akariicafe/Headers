@class NSString, NSDictionary;

@interface GPURawCounterSelect : NSObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *options;
@property unsigned int width;

+ (id)selectWithName:(id)a0;
+ (id)selectWithName:(id)a0 options:(id)a1;
+ (id)selectWithName:(id)a0 width:(unsigned int)a1;

- (id)initWithName:(id)a0 options:(id)a1;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)a0 width:(unsigned int)a1;

@end
