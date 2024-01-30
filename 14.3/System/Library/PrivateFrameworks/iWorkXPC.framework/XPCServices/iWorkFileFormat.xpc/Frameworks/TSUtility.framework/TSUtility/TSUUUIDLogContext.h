@class NSString;

@interface TSUUUIDLogContext : NSObject <TSULogContext>

@property (readonly) NSString *publicString;
@property (readonly) NSString *privateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
