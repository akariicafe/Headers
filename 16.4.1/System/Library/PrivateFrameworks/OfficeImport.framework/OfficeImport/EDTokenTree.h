@interface EDTokenTree : NSObject

+ (id)buildSubtree:(unsigned int)a0 formula:(id)a1;
+ (id)buildSubtreeAtIndex:(unsigned int *)a0 formula:(id)a1;
+ (unsigned int)childCountForToken:(unsigned int)a0 formula:(id)a1;
+ (BOOL)isTokenAttrASum:(unsigned short)a0;
+ (BOOL)isTokenNoOp:(unsigned int)a0 formula:(id)a1;

@end
