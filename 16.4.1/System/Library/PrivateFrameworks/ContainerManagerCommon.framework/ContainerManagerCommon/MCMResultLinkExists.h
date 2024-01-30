@interface MCMResultLinkExists : MCMResultBase

@property (readonly, nonatomic) BOOL exists;

- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithExists:(BOOL)a0;

@end
