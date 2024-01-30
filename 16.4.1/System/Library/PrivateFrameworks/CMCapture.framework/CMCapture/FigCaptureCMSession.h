@interface FigCaptureCMSession : NSObject

@property (readonly, retain, nonatomic) struct opaqueCMSession { } *cmsession;

- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (void)dealloc;
- (id)initWithCMSession:(struct opaqueCMSession { } *)a0;

@end
