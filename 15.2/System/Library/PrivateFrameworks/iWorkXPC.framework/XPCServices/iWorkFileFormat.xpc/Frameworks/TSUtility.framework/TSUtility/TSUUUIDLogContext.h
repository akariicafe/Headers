@class NSString;

@interface TSUUUIDLogContext : NSObject <TSULogContext>

@property (readonly) NSString *publicString;
@property (readonly) NSString *privateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
