@class NSString;

@interface ICDatabaseStateHandler : NSObject <ICStateHandlerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerStateHandler;
+ (id)stateDictionary;
+ (id)modernDatabaseState;
+ (id)miscState;
+ (void)addLoggable:(id)a0 toDictionary:(id)a1;
+ (id)stateDictionaryFromLoggables:(id)a0;


@end
