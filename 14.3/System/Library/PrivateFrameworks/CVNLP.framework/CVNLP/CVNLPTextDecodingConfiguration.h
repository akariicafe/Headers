@interface CVNLPTextDecodingConfiguration : NSObject

@property (nonatomic) id /* block */ commitActionBlock;

+ (id /* block */)defaultWhitespaceCommitActionBehavior;
+ (id /* block */)defaultCommitActionBehaviorForLocale:(id)a0;

- (id)initWithCommitActionBehavior:(id /* block */)a0;

@end
