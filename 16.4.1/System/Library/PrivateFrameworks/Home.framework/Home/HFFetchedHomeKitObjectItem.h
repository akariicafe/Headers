@class NSString;
@protocol HFHomeKitObject;

@interface HFFetchedHomeKitObjectItem : HFItem <HFHomeKitItemProtocol>

@property (retain, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)alwaysPerformFullFetch;

@end
