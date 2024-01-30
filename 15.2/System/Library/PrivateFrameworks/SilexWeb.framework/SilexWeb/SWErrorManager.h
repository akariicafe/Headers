@class NSString, NSError;
@protocol SWLogger;

@interface SWErrorManager : NSObject <SWMessageHandler, SWErrorProvider, SWErrorReporting>

@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic, setter=onError:) id /* block */ block;

@end
