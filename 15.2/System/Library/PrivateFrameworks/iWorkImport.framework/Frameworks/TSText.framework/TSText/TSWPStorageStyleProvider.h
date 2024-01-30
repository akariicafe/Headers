@class NSString;

@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider>

@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleProviderForStorage:(id)a0;

@end
