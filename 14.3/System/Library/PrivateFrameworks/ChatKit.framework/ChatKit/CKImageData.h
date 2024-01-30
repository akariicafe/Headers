@class NSString, NSData, NSURL, UIImage;

@interface CKImageData : NSObject {
    struct CGImageSource { } *_imageSource;
    unsigned long long _count;
    long long _orientation;
    struct CGSize { double width; double height; } _pxSize;
    BOOL _initializedProperties;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } ptSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pxSize;
@property (readonly, copy, nonatomic) NSString *UTIType;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) unsigned long long count;

+ (id)UTITypeForData:(id)a0;
+ (BOOL)supportsASTC;

- (id)MIMEType;
- (struct CGSize { double x0; double x1; })ptSize;
- (struct CGSize { double x0; double x1; })pxSize;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)thumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)UTIType;
- (id)initWithURL:(id)a0;
- (long long)orientation;
- (void)_initializeProperties;
- (id)thumbnailsFillToSize:(struct CGSize { double x0; double x1; })a0 maxCount:(unsigned long long)a1;
- (id)_thumbnailFitToSize:(struct CGSize { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (id)_thumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (id)_defaultDurationsWithMaxCount:(unsigned long long)a0;
- (id)thumbnailFitToSize:(struct CGSize { double x0; double x1; })a0;
- (id)thumbnailFillToSizeCropping:(struct CGSize { double x0; double x1; })a0;
- (id)thumbnailsFitToSize:(struct CGSize { double x0; double x1; })a0 maxCount:(unsigned long long)a1;
- (unsigned long long)count;
- (id)durationsWithMaxCount:(unsigned long long)a0;
- (id)thumbnailAtIndex:(unsigned long long)a0 fillToSize:(struct CGSize { double x0; double x1; })a1 maxCount:(unsigned long long)a2;

@end
