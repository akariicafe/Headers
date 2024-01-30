@class NSArray;
@protocol NTReadablePrivateDataStorage, FCContentContext;

@interface NTTodayModuleDescriptorsOperation : FCOperation

@property (copy, nonatomic) NSArray *contentRequests;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (nonatomic) BOOL requireRefreshedAppConfig;
@property (retain, nonatomic) id<NTReadablePrivateDataStorage> privateDataStorage;
@property (copy, nonatomic) id /* block */ descriptorsCompletion;

- (id)init;
- (void).cxx_destruct;

@end
