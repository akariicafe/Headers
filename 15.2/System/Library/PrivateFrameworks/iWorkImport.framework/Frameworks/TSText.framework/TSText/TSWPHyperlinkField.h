@class TSWPSelection, NSURL, NSString;

@interface TSWPHyperlinkField : TSWPSmartField {
    NSString *_urlString;
    NSString *_urlOriginalString;
}

@property (readonly, nonatomic) TSWPSelection *highlightSelection;
@property (copy, nonatomic, setter=setURL:) NSURL *url;
@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) NSString *displayTextForChangeTracking;
@property (copy, nonatomic, setter=setURLOriginal:) NSURL *urlOriginal;
@property (readonly, nonatomic) long long scheme;
@property (readonly, nonatomic) NSString *urlPrefix;
@property (readonly, nonatomic) BOOL hasDisplayText;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSString *fullPath;

+ (id)invalidURLSchemes;
+ (BOOL)schemeIsValidForURL:(id)a0;
+ (BOOL)schemeIsValidForURLReference:(id)a0;
+ (id)defaultFileURL;
+ (id)newURLFromURLReference:(id)a0;
+ (long long)schemeFromURL:(id)a0;
+ (id)defaultFieldStyleIdentifier;

- (BOOL)allowsEditing;
- (id)urlString;
- (void)setUrlString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 url:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (void)willBeRemovedFromDocumentRoot:(id)a0 storage:(id)a1;
- (void)setUrlOriginalString:(id)a0;
- (void)saveToUnsupportedHyperlinkArchive:(id)a0;
- (void)saveToHyperlinkArchive:(id)a0;
- (void)p_performHyperlinkSelector:(SEL)a0 onStorage:(id)a1;
- (id)urlOriginalString;
- (id)initWithContext:(id)a0 url:(id)a1 urlOriginal:(id)a2;

@end
