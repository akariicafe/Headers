@class NSString;

@interface IMAbstractDatabaseArchiver : NSObject

@property (readonly, nonatomic) NSString *sourcePath;
@property (readonly, nonatomic) NSString *destinationPath;

- (void)dealloc;
- (id)initWithSourceDatabasePath:(id)a0 destinationDatabasePath:(id)a1;
- (BOOL)copyDatabase:(id /* block */)a0;
- (BOOL)deleteFailedArchiveAtPath:(id)a0 error:(id *)a1;

@end
