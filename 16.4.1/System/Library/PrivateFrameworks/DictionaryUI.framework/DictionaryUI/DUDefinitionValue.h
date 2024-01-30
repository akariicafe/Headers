@class NSString, NSDictionary, MAAsset, NSAttributedString;

@interface DUDefinitionValue : NSObject

@property struct __CFArray { } *foundRecordRefs;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *term;
@property (readonly) NSAttributedString *definition;
@property (readonly) NSString *longDefinition;
@property (readonly) NSDictionary *definitionElements;
@property (retain, nonatomic) MAAsset *rawAsset;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_HTMLDefinitionForType:(long long)a0;
- (id)initWithDefinitionDictionary:(id)a0 term:(id)a1;

@end
