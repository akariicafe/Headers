@class MXCoreSessionSidekick, NSString;

@interface MXSessionSidekick : NSObject {
    MXCoreSessionSidekick *mCoreSession;
    unsigned long long mCoreSessionID;
    NSString *mDescription;
    int mClientType;
    BOOL mIsPlaying;
    unsigned long long mID;
}

+ (int)updateIsPlaying:(id)a0;

- (int)setClientType:(int)a0;
- (void)dumpInfo;
- (id)getClientTypeAsString;
- (id)info;
- (int)getClientType;
- (BOOL)getIsPlaying;
- (unsigned long long)getID;
- (void)dealloc;
- (int)setPropertyForKey:(id)a0 value:(id)a1;
- (int)setIsPlaying:(BOOL)a0;
- (int)activate;
- (int)copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (id)getCoreSession;
- (id)initWithSession:(id)a0;
- (int)setID:(unsigned long long)a0;
- (int)deactivate:(BOOL)a0 postInterruptionNotification:(BOOL)a1;
- (unsigned long long)getCoreSessionID;

@end
