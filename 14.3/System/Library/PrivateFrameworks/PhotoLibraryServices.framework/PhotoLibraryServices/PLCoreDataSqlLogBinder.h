@class NSString, NSMutableArray, NSRegularExpression;

@interface PLCoreDataSqlLogBinder : NSObject {
    NSString *_selectString;
    NSMutableArray *_bindValues;
    NSRegularExpression *_selectRegex;
    NSRegularExpression *_bindRegex;
}

@property (readonly, copy) NSString *boundSql;

- (id)init;
- (void).cxx_destruct;
- (void)addLogLine:(id)a0;
- (id)pool_boundSql;

@end
