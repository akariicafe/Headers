@interface SearchUIQuicklookPreviewCommand : SearchUIPeekCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)itemForRowModel:(id)a0 environment:(id)a1;

- (id)generateViewController;

@end
