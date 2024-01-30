@interface TSUMediaUploadWarning : TSUWarning

@property (readonly, nonatomic) BOOL isFromUploader;

- (id)initWithKind:(long long)a0 message:(id)a1 isFromUploader:(BOOL)a2;

@end
