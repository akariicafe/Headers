@class NSArray, NSString;

@interface ARPersonDetectionData : NSObject <ARResultData>

@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSArray *detectedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
