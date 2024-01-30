@class MPMediaItem;

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation

@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (nonatomic) long long keepLocal;

- (void).cxx_destruct;
- (void)execute;

@end
