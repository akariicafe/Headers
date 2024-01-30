@class NSString;

@interface CDMSetActiveGraphRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *activeGraphName;

- (void).cxx_destruct;
- (id)initWithActiveGraphName:(id)a0;

@end
