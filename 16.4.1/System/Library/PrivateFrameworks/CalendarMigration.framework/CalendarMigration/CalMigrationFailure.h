@class NSString, NSError, NSArray;

@interface CalMigrationFailure : NSObject

@property (readonly, copy, nonatomic) NSString *failureDescription;
@property (readonly, nonatomic) unsigned long long stage;
@property (readonly, copy, nonatomic) NSError *underlyingError;
@property (readonly, copy, nonatomic) NSString *relatedPath;
@property (readonly, nonatomic) BOOL isFatal;
@property (readonly, copy, nonatomic) NSArray *databaseIntegrityErrors;

+ (id)_labelForStage:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDatabaseIntegrityErrors:(id)a0;
- (id)initWithDescription:(id)a0 stage:(unsigned long long)a1 underlyingError:(id)a2 relatedPath:(id)a3 isFatal:(BOOL)a4;

@end
