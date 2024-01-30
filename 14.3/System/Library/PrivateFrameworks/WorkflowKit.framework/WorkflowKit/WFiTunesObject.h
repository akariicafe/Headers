@class NSString, NSURL, NSDictionary;

@interface WFiTunesObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSString *censoredName;
@property (readonly, nonatomic) NSURL *viewURL;
@property (readonly, nonatomic) NSDictionary *artworkURLs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (Class)classForParsingJSONDictionary:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)identifierJSONTransformer;
+ (id)artistIDJSONTransformer;
+ (id)releaseDateJSONTransformer;
+ (id)artworkURLsJSONTransformer;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 identifier:(id)a1 kind:(id)a2;

@end
