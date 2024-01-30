@class NSString;

@interface SXDefaultButtonComponentTextStyleModifier : NSObject <SXDOMModifying>

@property (nonatomic) BOOL shouldReturnUnmodifiedDOM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modifyDOM:(id)a0 context:(id)a1;

@end
