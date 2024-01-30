@class NSString;

@interface PIGainMap : NSObject

@property (class, readonly) NSString *currentVersion;

+ (id)gainMapParametersFromRawProperties:(id)a0;
+ (BOOL)shouldUseGainMapExposureCompensationForRawProperties:(id)a0;

@end
