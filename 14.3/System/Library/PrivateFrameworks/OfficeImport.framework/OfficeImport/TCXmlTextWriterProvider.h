@interface TCXmlTextWriterProvider : NSObject

@property (readonly, nonatomic) struct _xmlTextWriter { } *textWriter;

- (void)dealloc;
- (BOOL)tearDown;
- (BOOL)setUp;
- (BOOL)setUpWithTextWriter:(struct _xmlTextWriter { } *)a0;

@end
