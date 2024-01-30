@class CADisplay, NSString, NUColorSpace, NUPixelFormat;

@interface NUDisplay_iOS : NSObject <NUDisplay>

@property (readonly, nonatomic) CADisplay *display;
@property (readonly, nonatomic) id identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly) NUPixelFormat *pixelFormat;
@property (readonly) NUColorSpace *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displays;
+ (id)mainDisplay;

- (id)initWithCADisplay:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)wideColor;

@end
