@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject {
    long long _dataState;
}

- (id)fileURL;
- (BOOL)hasDataState;
- (long long)dataState;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1 dataState:(long long)a2;
- (BOOL)hasFileState;
- (id)fileState;

@end
