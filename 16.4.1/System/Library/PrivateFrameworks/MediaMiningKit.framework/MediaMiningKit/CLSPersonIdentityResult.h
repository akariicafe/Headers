@class CLSPersonIdentity;

@interface CLSPersonIdentityResult : NSObject

@property (retain, nonatomic) CLSPersonIdentity *person;
@property (nonatomic) float confidence;

+ (id)personResultWithPerson:(id)a0 andConfidence:(float)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isSamePersonAsResult:(id)a0;
- (void)mergeWithResult:(id)a0;

@end
