@class NSString;

@interface DMFSetAirPlayRouteRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *routeUID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL suppressPasscodePrompt;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
