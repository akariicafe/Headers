@class NSObject;
@protocol OS_xpc_object;

@interface CSGestureDropEvent : NSObject

@property (readonly, nonatomic) double droppingPrediction;
@property (readonly, nonatomic) double droppedPrediction;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

- (id)initWithXPCObject:(id)a0;
- (id)toString;
- (id)initWithDroppingPrediction:(double)a0 droppedPrediction:(double)a1 timestamp:(double)a2;

@end
