@class NSString, NSDictionary, NSMutableSet, NSError, NSObject;
@protocol OS_dispatch_group;

@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {
    NSDictionary *_tagToTagState;
    NSMutableSet *_extensionConnections;
    NSError *_stashedError;
    NSObject<OS_dispatch_group> *_initialStateGroup;
    NSString *_rootSandboxPath;
}

- (BOOL)assetPacksBecameUnavailable:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)assetPacksBecameAvailable:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithBundle:(id)a0;

@end
