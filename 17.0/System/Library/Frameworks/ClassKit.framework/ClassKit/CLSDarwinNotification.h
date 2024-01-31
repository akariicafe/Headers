@class NSString, NSDictionary;
@protocol NSObject;

@interface CLSDarwinNotification : NSObject

@property (readonly) id /* block */ block;
@property (readonly, weak) id<NSObject> observer;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 name:(id)a1 block:(id /* block */)a2;

@end
