@class NSArray;

@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {
    id _equalTo;
}

@property (retain, nonatomic) NSArray *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)setCollection:(id)a0;
- (id)currentIndexedValue;
- (id)init;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void).cxx_destruct;

@end
