@class WBSWebExtensionAPIWindowsEventObjC;

@interface WBSWebExtensionAPIWindowsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWindowsEventObjC *_onCreated;
    WBSWebExtensionAPIWindowsEventObjC *_onRemoved;
    WBSWebExtensionAPIWindowsEventObjC *_onFocusChanged;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIWindowsEventObjC *onCreated;
@property (readonly, nonatomic) WBSWebExtensionAPIWindowsEventObjC *onRemoved;
@property (readonly, nonatomic) WBSWebExtensionAPIWindowsEventObjC *onFocusChanged;
@property (readonly, nonatomic) double windowIdentifierNone;
@property (readonly, nonatomic) double windowIdentifierCurrent;

+ (id)windowsWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (BOOL)isPropertyAllowed:(id)a0;
- (void)getWindowWithID:(double)a0 info:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)getCurrentWindowWithInfo:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)getLastFocusedWindowWithInfo:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)getAllWindowsWithInfo:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)createWindowWithData:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)updateWindowWithID:(double)a0 info:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)closeWindowWithID:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (BOOL)_isResizeWindowInfoDictionaryValid:(id)a0 forMethod:(id)a1 outExceptionString:(id *)a2;
- (BOOL)_isGetInfoDictionaryValidForCaller:(id)a0 getInfo:(id)a1 outExceptionString:(id *)a2;
- (id)_supportedPropertiesFromCreateDataDictionary:(id)a0 outExceptionString:(id *)a1;

@end
