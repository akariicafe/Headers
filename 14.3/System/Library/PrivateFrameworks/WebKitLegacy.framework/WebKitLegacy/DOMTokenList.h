@class NSString;

@interface DOMTokenList : DOMObject

@property (readonly) unsigned int length;
@property (copy) NSString *value;

- (id)item:(unsigned int)a0;
- (void)dealloc;
- (BOOL)contains:(id)a0;
- (BOOL)toggle:(id)a0 force:(BOOL)a1;

@end
