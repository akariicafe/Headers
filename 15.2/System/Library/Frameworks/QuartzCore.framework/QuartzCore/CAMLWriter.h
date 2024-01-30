@class NSURL;
@protocol CAMLWriterDelegate;

@interface CAMLWriter : NSObject {
    struct _CAMLWriterPriv { struct __CFData *x0; struct __CFURL *x1; id x2; struct _CAMLWriterElement *x3; struct __CFString *x4; struct __CFSet *x5; int x6; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; } *_priv;
}

@property (retain) NSURL *baseURL;
@property (weak) id<CAMLWriterDelegate> delegate;

+ (id)writerWithData:(id)a0;

- (void)encodeObject:(id)a0;
- (void)endElement;
- (id)initWithData:(id)a0;
- (void)beginPropertyElement:(id)a0;
- (void)setElementAttribute:(id)a0 forKey:(id)a1;
- (void)setElementContent:(id)a0;
- (id)URLStringForResource:(id)a0;
- (void)beginElement:(unsigned int)a0;
- (void)encodeObject:(id)a0 conditionally:(BOOL)a1;
- (void)_writeElementTree:(struct _CAMLWriterElement { struct _CAMLWriterElement *x0; struct _CAMLWriterElement *x1; struct _CAMLWriterElement *x2; struct _CAMLWriterElement **x3; void *x4; struct __CFString *x5; struct _CAMLWriterAttribute *x6; struct _CAMLWriterAttribute **x7; struct __CFString *x8; unsigned int x9; } *)a0;
- (void)dealloc;

@end
