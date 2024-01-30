@class NSString, SBApplication;

@interface _SBStatusBarTapApplicationDestination : NSObject <NSCopying> {
    SBApplication *_application;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;

- (id)application;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithApplication:(id)a0 sceneIdentifier:(id)a1;

@end
