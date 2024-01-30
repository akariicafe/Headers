@class HDSQLiteDatabase, NSString, NSObject;
@protocol OS_dispatch_group;

@interface _HDSQLiteDatabaseWrapper : NSObject

@property (readonly, nonatomic) HDSQLiteDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *flushGroup;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) unsigned long long threadID;
@property (nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *typeString;

- (void).cxx_destruct;
- (void)captureThreadInfo;
- (id)initWithDatabase:(id)a0 flushGroup:(id)a1 generation:(unsigned long long)a2;

@end
