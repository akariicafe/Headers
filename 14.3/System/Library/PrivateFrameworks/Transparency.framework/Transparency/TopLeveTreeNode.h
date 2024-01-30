@class SignedLogHead;

@interface TopLeveTreeNode : GPBMessage

@property (retain, nonatomic) SignedLogHead *patHead;
@property (nonatomic) BOOL hasPatHead;

+ (id)descriptor;

@end
