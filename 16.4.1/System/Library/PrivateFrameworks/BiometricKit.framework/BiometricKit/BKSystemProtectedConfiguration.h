@class NSNumber;

@interface BKSystemProtectedConfiguration : NSObject

@property (retain, nonatomic) NSNumber *biometryEnabled;
@property (retain, nonatomic) NSNumber *unlockEnabled;
@property (retain, nonatomic) NSNumber *identificationEnabled;
@property (retain, nonatomic) NSNumber *loginEnabled;
@property (retain, nonatomic) NSNumber *unlockTokenMaxLifetime;
@property (retain, nonatomic) NSNumber *periocularFaceIDMatchEnabled;

- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
