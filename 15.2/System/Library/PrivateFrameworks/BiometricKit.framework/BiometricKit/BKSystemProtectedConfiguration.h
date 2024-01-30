@class NSNumber;

@interface BKSystemProtectedConfiguration : NSObject

@property (retain, nonatomic) NSNumber *biometryEnabled;
@property (retain, nonatomic) NSNumber *unlockEnabled;
@property (retain, nonatomic) NSNumber *identificationEnabled;
@property (retain, nonatomic) NSNumber *loginEnabled;
@property (retain, nonatomic) NSNumber *unlockTokenMaxLifetime;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;

@end
