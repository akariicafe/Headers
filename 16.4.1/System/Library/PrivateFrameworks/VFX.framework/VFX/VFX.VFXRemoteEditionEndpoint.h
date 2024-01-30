@class NSString;

@interface VFX.VFXRemoteEditionEndpoint : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ multipeerAdvertiser;
    void /* unknown type, empty encoding */ ownedByClient;
    void /* unknown type, empty encoding */ urlToReloadFrom;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ effect;
@property (nonatomic, copy) NSString *name;

- (id)initWithName:(id)a0;
- (BOOL)startAndReturnError:(id *)a0;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;

@end
