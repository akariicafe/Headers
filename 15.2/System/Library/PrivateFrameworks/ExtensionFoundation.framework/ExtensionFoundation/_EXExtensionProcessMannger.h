@class NSString, NSMapTable;

@interface _EXExtensionProcessMannger : NSObject <_EXExtensionProcessObserver>

@property (retain) NSMapTable *processExtensionMap;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } processExtensionMapLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
