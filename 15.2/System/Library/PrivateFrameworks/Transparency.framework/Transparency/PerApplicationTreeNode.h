@class SignedObject;

@interface PerApplicationTreeNode : GPBMessage

@property (retain, nonatomic) SignedObject *objectMapHead;
@property (nonatomic) BOOL hasObjectMapHead;

+ (id)descriptor;

@end
