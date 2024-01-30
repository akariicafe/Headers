@class NSString;

@interface HDSPSyncedDefaultsVersionInfo : NSObject

@property (readonly, copy, nonatomic) NSString *dataVersionKey;
@property (readonly, nonatomic) unsigned long long currentDataVersion;

- (void).cxx_destruct;
- (id)initWithDataVersionKey:(id)a0 currentDataVersion:(unsigned long long)a1;

@end
