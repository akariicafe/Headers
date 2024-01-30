@class NSString, NSError;

@interface CalMigrationFailure : NSObject

@property (readonly, copy, nonatomic) NSString *failureDescription;
@property (readonly, nonatomic) unsigned long long stage;
@property (readonly, copy, nonatomic) NSError *underlyingError;
@property (readonly, copy, nonatomic) NSString *relatedPath;

+ (id)_labelForStage:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 stage:(unsigned long long)a1 underlyingError:(id)a2 relatedPath:(id)a3;

@end
