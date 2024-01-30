@class NSString;

@interface PFLPlugin : NSObject <MLRTaskPerforming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (id)performTask:(id)a0 outError:(id *)a1;

@end
