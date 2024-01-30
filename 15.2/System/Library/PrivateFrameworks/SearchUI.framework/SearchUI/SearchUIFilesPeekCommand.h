@interface SearchUIFilesPeekCommand : SearchUIPeekCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (BOOL)canPreviewRowModel:(id)a0;
+ (id)fileURLForRowModel:(id)a0;

- (id)generateViewController;
- (BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)a0;

@end
