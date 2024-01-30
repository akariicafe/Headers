@class NSData, NSString, NSDictionary;

@interface UMUserSwitchContext : NSObject

@property (copy, nonatomic) NSData *setupData;
@property (copy, nonatomic) NSString *shortLivedToken;
@property (nonatomic) BOOL secondaryActionRequired;
@property (copy, nonatomic) NSDictionary *environmentsByServices;

+ (void)_switchEnvironmentsByServices:(id)a0;
+ (id)contextWithDataRepresentation:(id)a0;
+ (id)contextWithSetupData:(id)a0 shortLivedToken:(id)a1 secondaryActionRequired:(BOOL)a2;

- (id)dataRepresentation;
- (id)dictRepresentation;
- (id)description;
- (void).cxx_destruct;

@end
