@class NSString;

@interface ICDatabaseStateHandler : NSObject <ICStateHandlerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)miscState;
+ (id)stateDictionary;
+ (id)modernDatabaseState;
+ (id)stateDictionaryFromLoggables:(id)a0;
+ (void)registerStateHandler;


@end
