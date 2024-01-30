@class NSString, SBApplication;

@interface _SBStatusBarTapApplicationDestination : NSObject <NSCopying> {
    SBApplication *_application;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)application;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplication:(id)a0 sceneIdentifier:(id)a1;

@end
