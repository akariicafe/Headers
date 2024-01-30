@class NSDictionary, NSString, NSArray;

@interface ATXFaceGallerySection : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long semanticType;
@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *symbolImageName;
@property (copy, nonatomic) NSString *symbolColorName;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) NSString *localizedDescriptiveText;
@property (copy, nonatomic) NSString *unityDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionFromJSONDictionary:(id)a0;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalizedTitle:(id)a0 symbolImageName:(id)a1 symbolColorName:(id)a2 localizedSubtitle:(id)a3 localizedDescriptiveText:(id)a4 unityDescription:(id)a5 type:(long long)a6 items:(id)a7 semanticType:(long long)a8;
- (id)initWithLocalizedTitle:(id)a0 unityDescription:(id)a1 type:(long long)a2 items:(id)a3 semanticType:(long long)a4;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocalizedTitle:(id)a0 unityDescription:(id)a1 type:(long long)a2 items:(id)a3;
- (id)serialize;
- (void).cxx_destruct;

@end
