@class NSString, NSArray;

@interface AMSDataMigratorOptions : NSObject

@property (copy, nonatomic) NSString *currentBuildVersion;
@property (readonly, nonatomic) NSArray *optionsArray;
@property (copy, nonatomic) NSString *previousBuildVersion;
@property (nonatomic) unsigned long long scenario;

+ (id)_stringFromOptionsArray:(id)a0 atIndex:(unsigned long long)a1;

- (id)initWithOptionsArray:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
