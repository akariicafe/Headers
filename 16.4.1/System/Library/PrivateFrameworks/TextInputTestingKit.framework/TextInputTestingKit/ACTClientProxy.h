@class NSString;
@protocol ACTClientProtocol;

@interface ACTClientProxy : NSObject <TIClientProxy>

@property (readonly, weak, nonatomic) id<ACTClientProtocol> client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
