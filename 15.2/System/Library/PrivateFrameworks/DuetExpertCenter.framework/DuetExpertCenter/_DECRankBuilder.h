@class NSString;

@interface _DECRankBuilder : NSObject <_DECRankBuilder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)rankResults:(id)a0 limit:(unsigned long long)a1;

@end
