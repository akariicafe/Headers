@class NSString;

@interface CloudKit.PackageReference : NSObject {
    void /* unknown type, empty encoding */ fieldName;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ recordID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ databaseScope;
@property (nonatomic, readonly) NSString *fieldName;

- (id)init;
- (void).cxx_destruct;
- (id)initWith:(id)a0 error:(id *)a1;
- (id)initWithRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2;
- (id)serializedDataAndReturnError:(id *)a0;

@end
