@interface SearchUIOpenMediaPeekCommand : SearchUIPeekCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)mediaCommandForCardSection:(id)a0;

- (id /* block */)actionProvider;

@end
