@class NSString;

@interface SXLayoutContextFactory : NSObject <SXLayoutContextFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLayoutContextForColumnLayout:(id)a0 unitConverter:(id)a1;

@end
