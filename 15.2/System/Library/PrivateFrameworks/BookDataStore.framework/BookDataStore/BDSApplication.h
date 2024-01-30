@class NSString;

@interface BDSApplication : NSObject

@property (class, readonly) NSString *applicationCacheDirectory;
@property (class, readonly) NSString *applicationDocumentsDirectory;

@end
