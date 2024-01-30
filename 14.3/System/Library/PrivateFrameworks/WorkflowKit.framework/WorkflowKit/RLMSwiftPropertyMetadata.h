@class NSString;

@interface RLMSwiftPropertyMetadata : NSObject

@property (retain, nonatomic) NSString *propertyName;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *linkedPropertyName;
@property (nonatomic) int propertyType;
@property (nonatomic) unsigned long long kind;

+ (id)metadataForOtherProperty:(id)a0;
+ (id)metadataForListProperty:(id)a0;
+ (id)metadataForLinkingObjectsProperty:(id)a0 className:(id)a1 linkedPropertyName:(id)a2;
+ (id)metadataForOptionalProperty:(id)a0 type:(int)a1;
+ (id)metadataForNilLiteralOptionalProperty:(id)a0;

- (void).cxx_destruct;

@end
