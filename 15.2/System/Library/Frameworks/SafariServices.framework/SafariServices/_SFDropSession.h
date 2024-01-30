@interface _SFDropSession : NSObject

+ (void)dropSession:(id)a0 loadObjectsUsingLocalObjectLoader:(void /* function */ *)a1 objectLoader:(void /* function */ *)a2 completionHandler:(id /* block */)a3;
+ (BOOL)dropSession:(id)a0 containsItemsMatching:(void /* function */ *)a1 allowedTypeIdentifiers:(id)a2 allowedClasses:(id)a3;

@end
