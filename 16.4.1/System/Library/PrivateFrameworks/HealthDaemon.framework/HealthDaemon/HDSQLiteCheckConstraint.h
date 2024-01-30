@class NSString;

@interface HDSQLiteCheckConstraint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *SQLCheckConstraint;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
