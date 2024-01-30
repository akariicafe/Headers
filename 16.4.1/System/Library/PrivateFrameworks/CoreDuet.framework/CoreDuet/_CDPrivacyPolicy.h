@interface _CDPrivacyPolicy : NSObject

@property (readonly, nonatomic) BOOL canPersistOnStorage;
@property (readonly, nonatomic) double temporalPrecision;

+ (id)sharedPrivacyPolicy;

- (id)initWithTemporalPrecision:(double)a0 canPersistOnStorage:(BOOL)a1;
- (id)init;
- (id)description;

@end
