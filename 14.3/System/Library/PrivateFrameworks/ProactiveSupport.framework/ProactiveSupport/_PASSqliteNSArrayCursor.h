@class NSArray;

@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {
    id _equalTo;
}

@property (retain, nonatomic) NSArray *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (void)setCollection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)currentIndexedValue;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
