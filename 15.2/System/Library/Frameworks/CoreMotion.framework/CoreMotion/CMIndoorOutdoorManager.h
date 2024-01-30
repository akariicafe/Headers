@class CMIndoorOutdoorManagerInternal;
@protocol CMIndoorOutdoorDelegate;

@interface CMIndoorOutdoorManager : NSObject {
    CMIndoorOutdoorManagerInternal *_internal;
}

@property (weak, nonatomic) id<CMIndoorOutdoorDelegate> delegate;

+ (BOOL)isIndoorOutdoorStateAvailable;

- (void).cxx_destruct;
- (id)init;
- (void)startIndoorOutdoorUpdates;
- (void)stopIndoorOutdoorUpdates;
- (void)lastKnownIndoorOutdoorStateWithHandler:(id /* block */)a0;
- (void)dealloc;

@end
