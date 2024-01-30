@class NSString, NSFileManager, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface FLLoggingContext : NSObject <FLLoggingContext>

@property (copy, nonatomic) NSString *timestampReferenceIdentifier;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) unsigned long long now;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
