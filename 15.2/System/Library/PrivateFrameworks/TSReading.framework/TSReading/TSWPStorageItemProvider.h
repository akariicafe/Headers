@class NSArray, NSString;

@interface TSWPStorageItemProvider : NSObject <NSItemProviderWriting>

@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageItemProviderWithString:(id)a0;

- (id)initWithString:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_loadPlainTextData:(id /* block */)a0;

@end
