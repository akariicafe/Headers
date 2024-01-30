@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject {
    long long _dataState;
}

- (long long)dataState;
- (id)fileURL;
- (BOOL)hasDataState;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1 dataState:(long long)a2;
- (BOOL)hasFileState;
- (id)fileState;

@end
