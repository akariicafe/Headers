@interface TapToRadarKitHelper : NSObject

+ (id)getLogger;
+ (id)createDraft:(id)a0 description:(id)a1 attachmentURLs:(id)a2 extensionIDs:(id)a3 deviceIDs:(id)a4 component:(id)a5;
+ (BOOL)createProblem:(id)a0 componentVersion:(id)a1 componentID:(id)a2 title:(id)a3 description:(id)a4 attachmentURLs:(id)a5 extensionIDs:(id)a6 deviceIDs:(id)a7 displayReason:(id)a8;

@end
