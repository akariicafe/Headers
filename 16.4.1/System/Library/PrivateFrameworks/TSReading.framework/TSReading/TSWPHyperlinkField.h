@class NSURL, NSString;

@interface TSWPHyperlinkField : TSWPSmartField {
    NSURL *_url;
}

@property (retain, nonatomic, setter=setURL:) NSURL *url;
@property (readonly, nonatomic) NSString *displayText;

+ (id)defaultFieldStyleIdentifier;
+ (id)defaultFileURL;
+ (id)defaultMailURL;
+ (id)defaultURLFromDefaultsKey:(id)a0 defaultValue:(id)a1;
+ (id)defaultWebURL;
+ (id)newURLFromURLReference:(id)a0;
+ (int)schemeFromURL:(id)a0;
+ (BOOL)schemeIsValidForURL:(id)a0;
+ (BOOL)schemeIsValidForURLReference:(id)a0;
+ (id)urlReferenceFromURL:(id)a0;

- (id)filePath;
- (BOOL)hasDisplayText;
- (int)scheme;
- (void)dealloc;
- (int)elementKind;
- (BOOL)allowsEditing;
- (BOOL)isFileURL;
- (id)fullPath;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 url:(id)a1;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)canonicalRepresentationURL;
- (void)setURLReference:(id)a0;
- (id)urlPrefix;
- (id)urlReference;

@end
