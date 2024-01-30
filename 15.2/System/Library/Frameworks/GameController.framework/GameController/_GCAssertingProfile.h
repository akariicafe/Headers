@class NSString, GCMotion;

@interface _GCAssertingProfile : NSObject <GCNamedProfile>

@property (readonly) NSString *name;
@property (retain) GCMotion *_motion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)sampleRate;
- (void)setController:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void)setPlayerIndex:(long long)a0;
- (id)initWithController:(id)a0;
- (void)appDidBecomeActive;
- (id)productCategory;
- (id /* block */)valueChangedHandler;
- (void)setButton:(id)a0 value:(double)a1;
- (void)appWillResignActive;
- (void)setDpad:(id)a0 x:(double)a1 y:(double)a2;
- (void)setButton:(id)a0 pressed:(BOOL)a1;

@end
