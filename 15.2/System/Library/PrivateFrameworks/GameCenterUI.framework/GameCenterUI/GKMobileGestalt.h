@class NSString;

@interface GKMobileGestalt : NSObject

@property (class, readonly) BOOL wapiCapability;
@property (class, readonly) NSString *deviceClass;
@property (class, readonly) NSString *productType;

@end
