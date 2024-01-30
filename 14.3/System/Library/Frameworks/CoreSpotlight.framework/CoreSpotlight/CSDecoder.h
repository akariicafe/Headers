@class NSData;

@interface CSDecoder : NSObject <CSCoderData>

@property (readonly, nonatomic) struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } obj;
@property (readonly, nonatomic) const struct __CFAllocator { } *contentDeallocator;
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) id backingStore;

- (id)initWithData:(id)a0 obj:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a1;
- (void).cxx_destruct;
- (id)decodeObject:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)decodeObjectNoCopy:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a0;
- (id)decode;
- (id)description;
- (id)debugDescription;

@end
