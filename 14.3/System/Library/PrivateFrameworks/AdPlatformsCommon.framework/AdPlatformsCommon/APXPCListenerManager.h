@class NSString, NSMutableDictionary, NSMutableArray;

@interface APXPCListenerManager : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSMutableDictionary *delegates;
@property (retain, nonatomic) NSMutableArray *listeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addDelegate:(id)a0;

@end
