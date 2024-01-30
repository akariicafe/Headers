@class NSString, NSObject;
@protocol OS_os_log;

@interface EDSmartSortSuggestionsInterface : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topSalienciesForMailboxID:(id)a0 limit:(long long)a1 error:(id *)a2;


@end
