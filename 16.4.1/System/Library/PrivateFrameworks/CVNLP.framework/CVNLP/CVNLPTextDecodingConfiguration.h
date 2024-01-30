@interface CVNLPTextDecodingConfiguration : NSObject

@property (nonatomic) id /* block */ commitActionBlock;

+ (id /* block */)defaultCharacterCommitActionBehavior;
+ (id /* block */)defaultCommitActionBehaviorForLocale:(id)a0;
+ (id /* block */)defaultWhitespaceCommitActionBehavior;

- (id)initWithCommitActionBehavior:(id /* block */)a0;

@end
