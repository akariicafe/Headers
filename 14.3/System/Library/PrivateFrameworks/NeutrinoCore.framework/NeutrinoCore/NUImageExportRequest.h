@class NUImageExportFormat, NSDictionary, NUColorSpace, NSString;

@interface NUImageExportRequest : NUExportRequest <NUTimeBased>

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (copy, nonatomic) NUImageExportFormat *format;
@property (nonatomic) BOOL renderToData;
@property (copy) NSDictionary *imageProperties;
@property (copy) NSDictionary *coreGraphicsInfoDictionariesByAuxiliaryType;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (id)initWithComposition:(id)a0 destinationURL:(id)a1;
- (id)initWithComposition:(id)a0 exportFormat:(id)a1;

@end
