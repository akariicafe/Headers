@class NSArray;

@interface CDMPlumResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSArray *plumSpans;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithPlumSpans:(id)a0;

@end
