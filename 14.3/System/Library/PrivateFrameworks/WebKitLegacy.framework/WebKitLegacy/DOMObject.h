@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying> {
    struct DOMObjectInternal { } *_internal;
}

@property (readonly) DOMStyleSheet *sheet;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
