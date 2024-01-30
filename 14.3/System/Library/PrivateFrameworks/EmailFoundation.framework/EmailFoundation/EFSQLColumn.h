@class NSString, NSData, NSDate, NSNumber;

@interface EFSQLColumn : NSObject

@property (readonly, nonatomic) struct sqlite3_stmt { } *statement;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) id objectValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) long long databaseIDValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) long long int64Value;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) NSDate *dateValue;

- (id)initWithSQLiteStatement:(struct sqlite3_stmt { } *)a0 index:(long long)a1;
- (id)debugDescription;
- (id)initWithPreparedStatement:(id)a0 index:(long long)a1;

@end
