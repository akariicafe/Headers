@interface TSKRemovedFromDocumentContext : NSObject

+ (id)movingContext;
+ (id)hidingContext;

- (BOOL)wasMoved;
- (id)undoContext;
- (BOOL)wasHidden;

@end
