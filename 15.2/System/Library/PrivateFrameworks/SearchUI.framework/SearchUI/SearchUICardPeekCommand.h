@interface SearchUICardPeekCommand : SearchUIPeekCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)peekCardForRowModel:(id)a0;

- (id)generateViewController;

@end
