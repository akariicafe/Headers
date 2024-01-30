@class NSString, NSObject;
@protocol OS_os_log;

@interface EDSearchableIndexShim : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchableIndexWithName:(id)a0 protectionClass:(id)a1;
+ (id)defaultSearchableIndex;
+ (id)searchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;


@end
