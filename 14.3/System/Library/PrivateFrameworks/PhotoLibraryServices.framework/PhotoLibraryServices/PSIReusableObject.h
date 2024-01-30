@interface PSIReusableObject : NSObject {
    BOOL _isPreparedForReuse;
    BOOL _isPreparingFromStatement;
}

@property (readonly, nonatomic) BOOL isPreparedFromStatement;

- (id)init;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt { } *)a0;
- (void)didPrepareFromStatement:(struct sqlite3_stmt { } *)a0;

@end
