@class NSString;

@interface TSCEFunctionSpec : NSObject {
    NSString *_functionName;
    struct vector<TSCEFunctionArgSpec, std::allocator<TSCEFunctionArgSpec>> { struct TSCEFunctionArgSpec *__begin_; struct TSCEFunctionArgSpec *__end_; struct __compressed_pair<TSCEFunctionArgSpec *, std::allocator<TSCEFunctionArgSpec>> { struct TSCEFunctionArgSpec *__value_; } __end_cap_; } _arguments;
    struct vector<TSCEFunctionArgSpec, std::allocator<TSCEFunctionArgSpec>> { struct TSCEFunctionArgSpec *__begin_; struct TSCEFunctionArgSpec *__end_; struct __compressed_pair<TSCEFunctionArgSpec *, std::allocator<TSCEFunctionArgSpec>> { struct TSCEFunctionArgSpec *__value_; } __end_cap_; } _repeatingArguments;
}

@property (readonly) NSString *functionName;
@property (readonly) unsigned short functionIndex;
@property (readonly) const void *arguments;
@property (readonly, nonatomic) short minArguments;
@property (readonly, nonatomic) short maxArguments;
@property (readonly, nonatomic) unsigned long long numArguments;
@property (readonly, nonatomic) BOOL isOperator;
@property (readonly, nonatomic) int versionShippedIn;
@property (readonly, nonatomic) short repeatingGroupSize;

+ (id)functionSpecForFunctionIndex:(unsigned short)a0;
+ (id)functionSpecList;
+ (void)loadSpecDictionary;
+ (id)specWithFunctionName:(id)a0 minArgs:(int)a1 maxArgs:(int)a2 repeatingGroupSize:(short)a3 isOperator:(BOOL)a4 shipVersion:(int)a5 arguments:(const void *)a6 functionIndex:(unsigned short)a7;
+ (id)englishFunctionNameFromFunctionIndex:(unsigned short)a0;
+ (id)functionSpecForFunctionName:(id)a0;
+ (BOOL)isModeEnabled:(short)a0 functionIndex:(short)a1;
+ (id)unsupportedFunctionNameForLocale:(id)a0;
+ (BOOL)hasAnyDateArgumentsToFunction:(unsigned short)a0;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFunctionName:(id)a0 minArgs:(int)a1 maxArgs:(int)a2 repeatingGroupSize:(short)a3 isOperator:(BOOL)a4 shipVersion:(int)a5 arguments:(const void *)a6 functionIndex:(unsigned short)a7;
- (void)loadRepeatingArguments;
- (id)localizedFunctionNameForLocale:(id)a0;
- (void *)argumentSpecForIndex:(unsigned long long)a0;
- (void)p_ValidateArguments;
- (id)localizedToolTipStringForLocale:(id)a0;
- (id)displayStringForLocale:(id)a0;
- (int)accessorModeForArgumentIndex:(unsigned long long)a0;
- (char)preferredTypeForArgumentIndex:(unsigned long long)a0;
- (id)nativeSyntaxStringForArgument:(int)a0;
- (long long)modeNumberForLocalizedString:(id)a0 argumentSpecIndex:(unsigned long long)a1 attributeMax:(long long)a2 locale:(id)a3;

@end
