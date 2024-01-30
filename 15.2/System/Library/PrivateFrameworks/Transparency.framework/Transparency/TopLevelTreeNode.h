@class SignedObject;

@interface TopLevelTreeNode : GPBMessage

@property (retain, nonatomic) SignedObject *patHead;
@property (nonatomic) BOOL hasPatHead;

+ (id)descriptor;

@end
