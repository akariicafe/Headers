@class NSString, NSArray;

@interface CalABCReporter : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *subtype;
@property (retain, nonatomic) NSString *subtypeContext;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) BOOL ignoreRateLimiting;

- (void)report;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 subtype:(id)a1 context:(id)a2;
- (BOOL)rateLimitingAllowsABCReport;

@end
