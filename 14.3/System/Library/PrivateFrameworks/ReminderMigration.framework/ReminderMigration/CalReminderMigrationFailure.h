@class NSString, NSError;

@interface CalReminderMigrationFailure : NSObject

@property (readonly, copy, nonatomic) NSString *failureDescription;
@property (readonly, nonatomic) unsigned long long stage;
@property (readonly, copy, nonatomic) NSError *underlyingError;
@property (readonly, copy, nonatomic) NSString *relatedPath;

+ (id)_labelForStage:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDescription:(id)a0 stage:(unsigned long long)a1 underlyingError:(id)a2 relatedPath:(id)a3;

@end
