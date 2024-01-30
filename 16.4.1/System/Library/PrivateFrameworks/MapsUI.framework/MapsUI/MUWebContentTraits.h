@interface MUWebContentTraits : NSObject

@property (nonatomic, getter=isVibrant) BOOL vibrant;
@property (nonatomic, getter=isNativelyDrawingPlatter) BOOL nativelyDrawingPlatter;

- (id)queryItems;

@end
