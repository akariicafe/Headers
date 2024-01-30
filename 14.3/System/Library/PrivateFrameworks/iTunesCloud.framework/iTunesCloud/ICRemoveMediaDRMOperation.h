@class NSString, NSArray;

@interface ICRemoveMediaDRMOperation : ICRequestOperation {
    NSString *_mediaFilePath;
    NSArray *_sinfs;
    NSString *_newFileExtension;
}

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 sinfs:(id)a1;
- (void)removeDRMWithCompletionHandler:(id /* block */)a0;
- (void)execute;

@end
