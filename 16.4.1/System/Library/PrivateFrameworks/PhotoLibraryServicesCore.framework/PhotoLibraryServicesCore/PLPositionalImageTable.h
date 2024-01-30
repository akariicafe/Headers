@class PLImageFormat, NSString;

@interface PLPositionalImageTable : PLPositionalTable <PLThumbPersistenceManager>

@property (class, readonly, nonatomic) unsigned long long metalPixelFormat;
@property (class, readonly, nonatomic) const struct __CFString { } *colorSpaceName;

@property (nonatomic) BOOL formatIsCropped;
@property (nonatomic) int formatSideLen;
@property (readonly, nonatomic) unsigned long long formatBytesPerPixel;
@property (readonly, nonatomic) unsigned long long formatMaxBytesPerRow;
@property (readonly, nonatomic) PLImageFormat *format;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugImageDataAtIndex:(unsigned long long)a0;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0;
- (struct CGImage { } *)createImageWithIdentifier:(id)a0 orIndex:(unsigned long long)a1;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0 withToken:(id)a1;
- (void)getImageDataOffset:(long long *)a0 size:(struct CGSize { double x0; double x1; } *)a1 bytesPerRow:(unsigned long long *)a2 fromEntryFooter:(struct PLImageTableEntryFooter_s { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x0; unsigned int x1; unsigned int x2; int x3; } *)a3;
- (void).cxx_destruct;
- (id)_debugDescription;
- (id)readImageEntriesAtIndexes:(id)a0;
- (void)preheatDataForThumbnailIndexes:(id)a0;
- (id)imageDataWithIdentifier:(id)a0 orIndex:(unsigned long long)a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 dataOffset:(int *)a7;
- (struct PLImageTableEntryFooter_s { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x0; unsigned int x1; unsigned int x2; int x3; } *)tableFooterForIndex:(unsigned long long)a0;
- (BOOL)usesThumbIdentifiers;
- (BOOL)validateData:(id)a0 withToken:(id)a1;
- (Class)entriesClass;
- (id)initWithPath:(id)a0 readOnly:(BOOL)a1 format:(id)a2;
- (BOOL)readImageDataAtIndex:(unsigned long long)a0 intoPoolNode:(struct tagPLPositionalTableMemoryPoolNode { void *x0; struct tagPLPositionalTableMemoryPool *x1; BOOL x2; struct tagPLPositionalTableMemoryPoolNode *x3; } *)a1 bytesRead:(unsigned long long *)a2 imageWidth:(int *)a3 imageHeight:(int *)a4 imageDataWidth:(int *)a5 imageDataHeight:(int *)a6 startingOffset:(long long *)a7 bytesPerRow:(unsigned long long *)a8 uuidBytes:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } *)a9;
- (BOOL)writeDebugImageAtIndex:(unsigned long long)a0 toFileURL:(id)a1;

@end
