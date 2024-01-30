@interface TSKRemovedFromDocumentContext : NSObject

+ (id)hidingContext;
+ (id)movingContext;

- (BOOL)wasMoved;
- (id)undoContext;
- (BOOL)wasHidden;

@end
