@interface SearchUIFilesPeekCommand : SearchUIPeekCommand

+ (BOOL)canPreviewRowModel:(id)a0;
+ (id)fileURLForRowModel:(id)a0;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)a0;
- (id)generateViewController;

@end
