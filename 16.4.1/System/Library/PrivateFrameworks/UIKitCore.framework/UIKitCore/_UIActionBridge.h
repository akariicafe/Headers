@interface _UIActionBridge : NSObject

+ (id)actionMenuForMenu:(id)a0 firstTarget:(id)a1 includeHidden:(BOOL)a2;
+ (id)actionMenuForMenu:(id)a0 firstTarget:(id)a1 includeHidden:(BOOL)a2 validation:(id)a3;
+ (id)validatedCommandMenuForMenu:(id)a0 context:(id)a1;
+ (id)validatedCommandMenuForMenu:(id)a0 context:(id)a1 validation:(id)a2;

@end
