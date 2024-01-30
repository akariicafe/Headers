@class NSString;
@protocol NSCopying, NSObject;

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest <HMWriteOperation>

@property (readonly, nonatomic) id<NSCopying, NSObject> value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1;

@end
