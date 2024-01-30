@class NSString, CLKComplicationDescriptor;

@interface NTKCompanionSyncedComplication : NSObject {
    NSString *_companionBundleIdentifier;
    NSString *_fallbackName;
    NSString *_localizedName;
}

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) CLKComplicationDescriptor *descriptor;
@property (readonly, nonatomic) NSString *localizedName;

- (void).cxx_destruct;
- (id)initWithRemoteApplication:(id)a0 descriptor:(id)a1;

@end
