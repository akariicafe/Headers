@class NSString, NSMutableArray, NSMutableDictionary;

@interface CRKOPFPackageContents : NSObject

@property (copy, nonatomic) NSString *bookIdentifier;
@property (copy, nonatomic) NSString *bookIdentifierType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *coverImagePath;
@property (copy, nonatomic) NSString *tableOfContentsFilePath;
@property (copy, nonatomic) NSString *tableOfContentsMediaType;
@property (readonly, nonatomic) NSMutableArray *spineItemIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *itemPathsByIdentifier;

- (void).cxx_destruct;
- (id)itemIdentifierForHref:(id)a0 fragment:(id *)a1;
- (id)urlWithItemIdentifier:(id)a0 fragment:(id)a1;
- (id)cfiWithItemIdentifier:(id)a0 fragment:(id)a1;
- (id)initWithIdentifierType:(id)a0 identifier:(id)a1;

@end
