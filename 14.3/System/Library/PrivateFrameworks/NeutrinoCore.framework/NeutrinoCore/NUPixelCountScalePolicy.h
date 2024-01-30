@class NSString;

@interface NUPixelCountScalePolicy : NSObject <NUScalePolicy> {
    long long _totalPixelCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
