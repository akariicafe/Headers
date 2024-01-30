@class NSURL, NSString;

@interface TSWPHyperlinkField : TSWPSmartField {
    NSURL *_url;
}

@property (retain, nonatomic, setter=setURL:) NSURL *url;
@property (readonly, nonatomic) NSString *displayText;

+ (BOOL)schemeIsValidForURL:(id)a0;
+ (BOOL)schemeIsValidForURLReference:(id)a0;
+ (id)defaultURLFromDefaultsKey:(id)a0 defaultValue:(id)a1;
+ (id)defaultFileURL;
+ (id)defaultMailURL;
+ (id)newURLFromURLReference:(id)a0;
+ (id)urlReferenceFromURL:(id)a0;
+ (int)schemeFromURL:(id)a0;
+ (id)defaultFieldStyleIdentifier;
+ (id)defaultWebURL;

- (BOOL)allowsEditing;
- (BOOL)isFileURL;
- (id)filePath;
- (id)fullPath;
- (int)elementKind;
- (BOOL)hasDisplayText;
- (int)scheme;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 url:(id)a1;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)canonicalRepresentationURL;
- (id)urlReference;
- (void)setURLReference:(id)a0;
- (id)urlPrefix;

@end
