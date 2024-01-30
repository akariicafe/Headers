@class MPMediaItem;

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation

@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (nonatomic) long long keepLocal;
@property (nonatomic) unsigned long long keepLocalConstraints;

- (void)execute;
- (void).cxx_destruct;

@end
