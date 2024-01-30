@class NSData, NSString, NSDictionary;

@interface UMUserSwitchContext : NSObject

@property (copy, nonatomic) NSData *setupData;
@property (copy, nonatomic) NSString *shortLivedToken;
@property (nonatomic) BOOL secondaryActionRequired;
@property (copy, nonatomic) NSDictionary *environmentsByServices;

+ (id)contextWithDataRepresentation:(id)a0;
+ (BOOL)_isInternalBuild;
+ (void)_switchEnvironmentsByServices:(id)a0;
+ (id)contextWithSetupData:(id)a0 shortLivedToken:(id)a1 secondaryActionRequired:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;
- (id)dictRepresentation;
- (id)dataRepresentation;

@end
