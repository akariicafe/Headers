@class WBSSQLiteStatement, WBSSQLiteRow;

@interface WBSSQLiteRowEnumerator : NSEnumerator {
    WBSSQLiteRow *_row;
}

@property (readonly, nonatomic) WBSSQLiteStatement *statement;
@property (readonly, nonatomic) int lastResultCode;

- (id)nextObject;
- (id)initWithResultsOfStatement:(id)a0;
- (void).cxx_destruct;

@end
