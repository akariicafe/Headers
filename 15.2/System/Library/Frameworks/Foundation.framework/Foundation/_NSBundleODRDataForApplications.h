@class NSString, NSDictionary, NSMutableSet, NSError, NSObject;
@protocol OS_dispatch_group;

@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {
    NSDictionary *_tagToTagState;
    NSMutableSet *_extensionConnections;
    NSError *_stashedError;
    NSObject<OS_dispatch_group> *_initialStateGroup;
    NSString *_rootSandboxPath;
}

- (id)initWithBundle:(id)a0;
- (BOOL)assetPacksBecameAvailable:(id)a0 error:(id *)a1;
- (BOOL)assetPacksBecameUnavailable:(id)a0 error:(id *)a1;
- (id)description;
- (void)dealloc;

@end
