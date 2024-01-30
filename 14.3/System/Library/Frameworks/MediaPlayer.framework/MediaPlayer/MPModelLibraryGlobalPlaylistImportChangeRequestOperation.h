@class NSString, MPMediaLibrary;

@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) NSString *globalPlaylistID;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (nonatomic) BOOL shouldLibraryAdd;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;

@end
