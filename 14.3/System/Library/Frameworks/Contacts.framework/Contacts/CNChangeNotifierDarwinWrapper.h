@class NSString;

@interface CNChangeNotifierDarwinWrapper : NSObject <CNChangeNotifierWrapper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0 notification:(id)a1;
- (void)removeObserver:(id)a0 notification:(id)a1;
- (void)postNotification:(id)a0;

@end
