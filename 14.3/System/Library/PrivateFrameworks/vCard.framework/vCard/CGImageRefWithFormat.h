@interface CGImageRefWithFormat : NSObject

@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) struct __CFString { } *sourceImageFormatUTI;

- (id)initWithImage:(struct CGImage { } *)a0 andFormat:(struct __CFString { } *)a1;

@end
