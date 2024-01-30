@class NSString, NSArray;

@interface CDBABCReporter : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *subtype;
@property (retain, nonatomic) NSString *subtypeContext;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) BOOL ignoreRateLimiting;

- (void)report;
- (void).cxx_destruct;
- (BOOL)rateLimitingAllowsABCReport;
- (id)initWithSubtype:(id)a0 context:(id)a1;

@end
