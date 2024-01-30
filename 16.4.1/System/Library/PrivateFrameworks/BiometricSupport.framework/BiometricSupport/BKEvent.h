@interface BKEvent : NSObject

@property (readonly) unsigned char cls;
@property (readonly) unsigned int event;
@property (readonly) BOOL isStart;
@property (readonly) BOOL isTerminal;
@property (readonly) BOOL isMetadata;
@property (readonly) BOOL isSmartKeyboard;
@property (readonly) BOOL isHigh;
@property (readonly) BOOL isLow;

- (id)initWithEventOrCode:(unsigned long long)a0;
- (void)encodeEventValue:(unsigned int *)a0 secondValue:(unsigned int *)a1;
- (void)setProperties;
- (id)description;
- (id)initWithEncodedEventOrCode:(unsigned int)a0;

@end
