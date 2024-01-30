@class NSString, NSURL;

@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject {
    NSString *_fileState;
    NSURL *_packageURL;
}

- (id)fileURL;
- (void).cxx_destruct;
- (long long)dataState;
- (id)fileState;
- (BOOL)hasDataState;
- (BOOL)hasFileState;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1 fileState:(id)a2 packageURL:(id)a3;

@end
