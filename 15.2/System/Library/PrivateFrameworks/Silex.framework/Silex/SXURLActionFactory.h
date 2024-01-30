@class NSString;

@interface SXURLActionFactory : NSObject <SXURLActionFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionForURL:(id)a0;
- (id)actionForURL:(id)a0 analytics:(id)a1;

@end
