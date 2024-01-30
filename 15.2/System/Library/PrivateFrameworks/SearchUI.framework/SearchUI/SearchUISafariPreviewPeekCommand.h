@interface SearchUISafariPreviewPeekCommand : SearchUIPeekCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)firstSafariPreviewableUrlFromURLs:(id)a0;

- (id)generateViewController;

@end
