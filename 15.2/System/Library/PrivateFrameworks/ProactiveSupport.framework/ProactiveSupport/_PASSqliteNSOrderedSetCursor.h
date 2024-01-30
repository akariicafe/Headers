@class NSOrderedSet;

@interface _PASSqliteNSOrderedSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSOrderedSet *collection;

+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;

- (void)setCollection:(id)a0;
- (id)currentIndexedValue;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
