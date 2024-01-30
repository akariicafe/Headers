@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {
    TSPDatabase *_database;
    long long _identifier;
}

- (long long)dataLength;
- (void).cxx_destruct;
- (id)inputStream;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)initWithDatabase:(id)a0 identifier:(long long)a1;
- (struct sqlite3_blob { } *)_openBlob;
- (struct ZeroCopyInputStream { void /* function */ **x0; } *)createProtobufInputStream;

@end
