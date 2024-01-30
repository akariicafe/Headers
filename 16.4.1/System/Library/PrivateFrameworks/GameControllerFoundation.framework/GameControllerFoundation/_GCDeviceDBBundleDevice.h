@class NSString, NSBundle, NSPredicate, NSArray;

@interface _GCDeviceDBBundleDevice : NSObject {
    NSBundle *_bundle;
    NSArray *_personalityPaths;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSPredicate *ioMatchingPredicate;

- (id)personalities;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0 dictionary:(id)a1 error:(out id *)a2;

@end
