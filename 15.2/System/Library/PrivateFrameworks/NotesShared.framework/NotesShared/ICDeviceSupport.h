@class NSString;

@interface ICDeviceSupport : NSObject

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } notesDeviceDrawingSize;
@property (class, readonly, nonatomic) BOOL deviceSupportsPencil;
@property (class, readonly, nonatomic) BOOL deviceSupportsFirstGenPencil;
@property (class, readonly, nonatomic) BOOL deviceSupportsSystemPaper;
@property (class, readonly, nonatomic) BOOL deviceSupportsTouchID;
@property (class, readonly, nonatomic) BOOL deviceSupportsFaceID;
@property (class, readonly, nonatomic) BOOL deviceIsIPad;
@property (class, readonly, nonatomic) BOOL isRunningUnitTests;
@property (class, readonly, nonatomic) NSString *productName;
@property (class, readonly, nonatomic) NSString *productVersion;
@property (class, readonly, nonatomic) NSString *productBuildVersion;

+ (id)notesProductType;

@end
