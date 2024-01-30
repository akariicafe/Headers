@interface ML3DatabaseBlob : NSObject {
    struct sqlite3_blob { } *_sqliteHandle;
}

- (unsigned long long)length;
- (id)init;
- (id)data;
- (void)dealloc;
- (int)readData:(id)a0 numberOfBytes:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)initWithSQLiteHandle:(struct sqlite3_blob { } *)a0;
- (int)writeData:(id)a0 numberOfBytes:(unsigned long long)a1 offset:(unsigned long long)a2;

@end
