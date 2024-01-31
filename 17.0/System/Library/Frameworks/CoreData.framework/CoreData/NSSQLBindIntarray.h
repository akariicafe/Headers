@class NSString;

@interface NSSQLBindIntarray : NSObject

@property (nonatomic) unsigned int index;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSString *tableName;

- (void)dealloc;
- (id)initWithValue:(id)a0;

@end
