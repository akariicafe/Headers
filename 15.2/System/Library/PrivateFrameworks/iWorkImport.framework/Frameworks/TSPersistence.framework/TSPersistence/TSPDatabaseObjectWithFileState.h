@class NSString, NSURL;

@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject {
    NSString *_fileState;
    NSURL *_packageURL;
}

- (id)fileURL;
- (void).cxx_destruct;
- (BOOL)hasDataState;
- (long long)dataState;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1 fileState:(id)a2 packageURL:(id)a3;
- (BOOL)hasFileState;
- (id)fileState;

@end
