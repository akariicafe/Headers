@class NSString, NSBundle;

@interface DMPluginFileSystemRep : NSObject {
    NSBundle *_bundle;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)allReps;

- (void).cxx_destruct;
- (BOOL)isBundleValid;
- (id)initWithName:(id)a0 atEnclosingPath:(id)a1;

@end
