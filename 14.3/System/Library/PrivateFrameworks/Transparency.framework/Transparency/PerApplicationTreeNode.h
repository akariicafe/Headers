@class SignedMapHead;

@interface PerApplicationTreeNode : GPBMessage

@property (retain, nonatomic) SignedMapHead *objectMapHead;
@property (nonatomic) BOOL hasObjectMapHead;
@property (retain, nonatomic) SignedMapHead *revocationMapHead;
@property (nonatomic) BOOL hasRevocationMapHead;

+ (id)descriptor;

@end
