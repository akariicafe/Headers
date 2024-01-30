@class NSArray, NSString;
@protocol NSObject;

@interface __RCKeyPathObservance : NSObject <RCKeyPathObservance>

@property (weak, nonatomic) id<NSObject> object;
@property (retain, nonatomic) NSArray *keyPaths;
@property (copy, nonatomic) id /* block */ observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
