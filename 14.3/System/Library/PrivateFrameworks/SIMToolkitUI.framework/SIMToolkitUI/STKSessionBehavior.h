@class NSString;

@interface STKSessionBehavior : NSObject <BSXPCCoding>

@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) BOOL shouldSendResponseUponDisplay;
@property (readonly, nonatomic) BOOL dismissesAfterUserEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;

@end
