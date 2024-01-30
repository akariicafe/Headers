@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, weak, nonatomic) HDQueryServer *queryServer;
@property (readonly, copy, nonatomic) NSString *processBundleIdentifier;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) BOOL shouldThrottle;

- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldRunAfterBlock:(id)a0 foregroundBundleIdentifiers:(id)a1;
- (id)initWithBlock:(id /* block */)a0 queryServer:(id)a1;

@end
