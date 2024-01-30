@class NSString, NSMutableArray;
@protocol SWInteraction, SWInteractionFactory, SWLogger;

@interface SWInteractionProvider : NSObject <SWMessageHandler, SWInteractionProvider>

@property (readonly, nonatomic) id<SWInteractionFactory> interactionFactory;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) NSMutableArray *blocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<SWInteraction> interaction;

@end
