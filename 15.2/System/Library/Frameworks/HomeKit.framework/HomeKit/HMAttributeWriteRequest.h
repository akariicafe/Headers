@class NSString;
@protocol NSCopying, NSObject;

@interface HMAttributeWriteRequest : HMAttributeRequest <HMWriteOperation>

@property (readonly, nonatomic) id<NSCopying, NSObject> value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)writeRequestWithAccessoryProfile:(id)a0 attribute:(id)a1 value:(id)a2;

@end
