@class NSString, NSData, PLImageFormat;

@interface PLTableThumbnailEncoderResult : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSData *ktxData;
@property (readonly, nonatomic) NSData *ktxHeaderData;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct PLImageTableEntryFooter_s { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x0; unsigned int x1; unsigned int x2; int x3; } tableFooter;
@property (readonly, nonatomic) PLImageFormat *imageFormat;

+ (unsigned long long)_minKtxDataLengthFromImageSize:(struct CGSize { double x0; double x1; })a0;

- (struct PL_KTXHeader { unsigned char x0[12]; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; } *)_ktxHeader;
- (id)entryDataForEntryLength:(unsigned long long)a0;
- (id)initWithKtxData:(id)a0 uuid:(id)a1 format:(id)a2;
- (unsigned long long)imageDataLength;
- (void).cxx_destruct;

@end
