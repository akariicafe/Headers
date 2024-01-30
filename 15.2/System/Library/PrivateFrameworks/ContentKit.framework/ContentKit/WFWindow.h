@class NSString, WFImage, NSNumber;

@interface WFWindow : NSObject <NSCopying, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isActiveLoaded;
@property (nonatomic) BOOL sizeLoaded;
@property (nonatomic) BOOL positionLoaded;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) WFImage *image;
@property (retain, nonatomic) NSNumber *windowIndex;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setSizeNeedsReloading;
- (void)setPositionNeedsReloading;

@end
