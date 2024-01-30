@class NSData;

@interface HMBLocalSQLContextRowItem : HMFObject

@property (readonly, nonatomic) unsigned long long itemRow;
@property (readonly, nonatomic) NSData *externalID;
@property (readonly, nonatomic) NSData *externalData;
@property (readonly, nonatomic) NSData *modelData;
@property (readonly, nonatomic) unsigned long long modelEncoding;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 returning:(unsigned long long)a1;
- (id)initWithItemRow:(unsigned long long)a0 externalID:(id)a1 externalData:(id)a2 modelEncoding:(unsigned long long)a3 modelData:(id)a4;

@end
