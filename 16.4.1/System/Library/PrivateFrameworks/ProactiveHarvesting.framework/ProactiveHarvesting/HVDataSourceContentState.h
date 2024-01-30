@class NSString, NSMutableDictionary, NSData;

@interface HVDataSourceContentState : NSObject {
    NSString *_path;
    NSData *_fileContentsHash;
}

@property (readonly, nonatomic) unsigned int dataSource;
@property (readonly, nonatomic) NSMutableDictionary *deferredContentStates;

+ (BOOL)deleteStateForDataSource:(unsigned int)a0 basePath:(id)a1 error:(id *)a2;

- (id)initWithDataSource:(unsigned int)a0 basePath:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)saveStateWithError:(id *)a0;
- (void).cxx_destruct;

@end
