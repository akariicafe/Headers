@class NSString;

@interface VNModelFileImpl : NSObject <VNModelFile> {
    const struct mapped_model_file { void /* function */ **x0; unsigned long long x1; } *m_impl;
}

@property (readonly, nonatomic) const void *baseAddress;
@property (readonly, nonatomic) unsigned long long length;
@property (retain, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *ptrFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)advise:(long long)a0;
- (id)initWithMappedModel:(const struct mapped_model_file { void /* function */ **x0; unsigned long long x1; } *)a0;

@end
