@class NSString;

@interface REScriptASTIdentifierNode : REScriptASTNode

@property (readonly, nonatomic) NSString *name;

+ (id)parseBuffer:(id)a0 error:(id *)a1;

- (id)dependencies;

@end
