@interface DOMTimeRanges : DOMObject

@property (readonly) unsigned int length;

- (double)start:(unsigned int)a0;
- (double)end:(unsigned int)a0;
- (void)dealloc;

@end
