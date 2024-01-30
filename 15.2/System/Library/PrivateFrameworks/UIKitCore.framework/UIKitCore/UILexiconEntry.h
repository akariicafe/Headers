@class NSString;

@interface UILexiconEntry : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *documentText;
@property (readonly, nonatomic) NSString *userInput;

+ (id)_entryWithTILexiconEntry:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
