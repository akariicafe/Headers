@class NSString;

@interface UILexiconEntry : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *documentText;
@property (readonly, nonatomic) NSString *userInput;

+ (id)_entryWithTILexiconEntry:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
