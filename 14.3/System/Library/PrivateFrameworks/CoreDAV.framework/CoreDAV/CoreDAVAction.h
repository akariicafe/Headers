@interface CoreDAVAction : NSObject

@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) id context;
@property (retain, nonatomic) id changeContext;
@property (nonatomic) BOOL ignoresGuardianRestrictions;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAction:(int)a0 context:(id)a1;

@end
