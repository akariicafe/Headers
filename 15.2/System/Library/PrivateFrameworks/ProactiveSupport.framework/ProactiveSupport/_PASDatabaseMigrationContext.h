@class NSDictionary, _PASSqliteDatabase, NSObject;
@protocol _PASDatabaseMigrationProtocol;

@interface _PASDatabaseMigrationContext : NSObject {
    NSObject<_PASDatabaseMigrationProtocol> *object;
    _PASSqliteDatabase *db;
    unsigned int version;
    NSDictionary *migrations;
}

- (id)description;
- (void).cxx_destruct;

@end
