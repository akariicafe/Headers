@interface SearchUINewsPeekCommand : SearchUIPeekCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)newsURLForRowModel:(id)a0;

- (id)generateViewController;

@end
