@class NSString;
@protocol SiriCoreSQLiteValue;

@interface SiriCoreSQLiteColumnConstraint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) id<SiriCoreSQLiteValue> value;
@property (readonly, nonatomic) unsigned long long options;

+ (id)primaryKeyColumnConstraintWithName:(id)a0 usesAutoIncrement:(BOOL)a1;
+ (id)defaultColumnConstraintWithName:(id)a0 value:(id)a1;
+ (id)uniqueColumnConstraintWithName:(id)a0;
+ (id)notNullColumnConstraintWithName:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 type:(long long)a1 value:(id)a2 options:(unsigned long long)a3;

@end
