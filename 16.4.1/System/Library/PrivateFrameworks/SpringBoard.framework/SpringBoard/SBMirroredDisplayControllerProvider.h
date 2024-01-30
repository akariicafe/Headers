@class NSString, SBExternalDisplayDefaults;

@interface SBMirroredDisplayControllerProvider : NSObject <SBDisplayControllerProviding> {
    SBExternalDisplayDefaults *_externalDisplayDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayControllerInfoForConnectingDisplay:(id)a0 configuration:(id)a1;
- (void).cxx_destruct;
- (id)initWithExternalDisplayDefaults:(id)a0;

@end
