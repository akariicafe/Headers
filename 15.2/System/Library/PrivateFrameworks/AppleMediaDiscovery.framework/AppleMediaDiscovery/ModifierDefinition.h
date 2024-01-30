@class NSString, NSArray;

@interface ModifierDefinition : NSObject

@property (retain, nonatomic) NSString *methodName;
@property (retain, nonatomic) NSArray *featureIds;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithModifierDefinitionDictionary:(id)a0;

@end
