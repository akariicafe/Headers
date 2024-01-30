@class UIImage, ACAccount, NSValue;

@interface AAUIUpdateMyPhotoRequest : AARequest {
    ACAccount *_account;
    UIImage *_photo;
    NSValue *_cropRect;
}

+ (id)_downsampleImage:(id)a0 fromStartingQuality:(double)a1 toEndingQuality:(double)a2 increment:(double)a3 maxLength:(unsigned long long)a4;
+ (id)_fullScreen2ImageFromImage:(id)a0 cropRect:(id)a1 fullScreenCropRect:(id *)a2;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 photo:(id)a1 cropRect:(id)a2;

@end
