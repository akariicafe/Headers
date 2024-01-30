@class ACAccountType, NSString;

@interface SUScriptAppleAccountType : SUScriptObject

@property (readonly, nonatomic) ACAccountType *nativeAccountType;
@property (readonly) id accessGranted;
@property (readonly) NSString *accountTypeDescription;
@property (readonly) NSString *identifier;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)initWithACAccountType:(id)a0;

@end
