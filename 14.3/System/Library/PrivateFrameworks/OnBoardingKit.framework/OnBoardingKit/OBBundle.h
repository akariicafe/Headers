@class NSString, NSBundle;

@interface OBBundle : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *bundleVersion;

+ (id)bundleAtPath:(id)a0;
+ (id)bundleWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)privacyFlow;
- (id)initWithBundle:(id)a0;

@end
