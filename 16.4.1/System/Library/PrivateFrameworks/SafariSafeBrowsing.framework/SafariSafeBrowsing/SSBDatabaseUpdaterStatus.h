@class NSString;

@interface SSBDatabaseUpdaterStatus : NSObject {
    struct DatabaseUpdaterStatus { int state; int provider; } _databaseUpdaterStatus;
}

@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) unsigned long long databaseUpdaterState;

- (id)_initWithDatabaseUpdaterStatus:(struct DatabaseUpdaterStatus { int x0; int x1; })a0;

@end
