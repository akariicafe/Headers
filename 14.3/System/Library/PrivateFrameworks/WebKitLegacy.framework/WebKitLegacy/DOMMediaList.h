@class NSString;

@interface DOMMediaList : DOMObject

@property (copy) NSString *mediaText;
@property (readonly) unsigned int length;

- (id)item:(unsigned int)a0;
- (void)dealloc;
- (void)deleteMedium:(id)a0;
- (void)appendMedium:(id)a0;

@end
