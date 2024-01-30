@class NSDictionary;

@interface MCMResultGetCodeSignMapping : MCMResultBase

@property (readonly, nonatomic) NSDictionary *info;

- (id)initWithInfo:(id)a0;
- (BOOL)encodeResultOntoReply:(id)a0;
- (void).cxx_destruct;

@end
