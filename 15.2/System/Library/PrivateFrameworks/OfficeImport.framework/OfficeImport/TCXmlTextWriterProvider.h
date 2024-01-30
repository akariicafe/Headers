@interface TCXmlTextWriterProvider : NSObject

@property (readonly, nonatomic) struct _xmlTextWriter { } *textWriter;

- (BOOL)tearDown;
- (BOOL)setUp;
- (void)dealloc;
- (BOOL)setUpWithTextWriter:(struct _xmlTextWriter { } *)a0;

@end
