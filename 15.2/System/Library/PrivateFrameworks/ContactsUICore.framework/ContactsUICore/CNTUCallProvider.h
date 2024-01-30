@class NSString, TUCallProvider, NSSet;

@interface CNTUCallProvider : NSObject <CNTUCallProvider>

@property (copy, nonatomic) TUCallProvider *callProvider;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL supportsAudio;
@property (readonly, nonatomic) BOOL supportsVideo;
@property (readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dialRequestForHandle:(id)a0 contact:(id)a1 video:(BOOL)a2;
- (id)initWithCallProvider:(id)a0;

@end
