@class NSString;

@interface CKComponentFlexibleSizeRangeProvider : NSObject <CKComponentSizeRangeProviding> {
    long long _flexibility;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithFlexibility:(long long)a0;

- (id)init;
- (struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sizeRangeForBoundingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFlexibility:(long long)a0;

@end
