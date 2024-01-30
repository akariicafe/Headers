@class NSArray, NSString, NSMutableDictionary;

@interface AVOutputDeviceFrecentsReader : NSObject <AVOutputDeviceFrecentsReading> {
    NSString *_frecentsFilePath;
    NSMutableDictionary *_frecents;
}

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
