@class NSData;

@interface CSDecoder : NSObject <CSCoderData>

@property (readonly, nonatomic) struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } obj;
@property (readonly, nonatomic) const struct __CFAllocator { } *contentDeallocator;
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) id backingStore;

+ (id)decodeURLPreservingSecurityScope:(id)a0;

- (id)initWithData:(id)a0;
- (id)decodeObjectNoCopy:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a0;
- (id)decodeObject:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a0;
- (id)initWithData:(id)a0 obj:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a1;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)decode;
- (void).cxx_destruct;

@end
