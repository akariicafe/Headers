@class NSString;
@protocol GEOMotionContextProvider, GEOMotionContextDelegate;

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate> {
    id<GEOMotionContextProvider> _provider;
}

@property (weak, nonatomic) id<GEOMotionContextDelegate> delegate;
@property (readonly, nonatomic) unsigned long long motionType;
@property (readonly, nonatomic) unsigned long long exitType;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) BOOL isMoving;
@property (readonly, nonatomic) BOOL isWalking;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) BOOL isCycling;
@property (readonly, nonatomic) BOOL isDriving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopMotionUpdates;
- (void)motionContextProvider:(id)a0 didUpdateMotion:(unsigned long long)a1 exitType:(unsigned long long)a2 confidence:(unsigned long long)a3;
- (void)startMotionUpdatesWithProvider:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
