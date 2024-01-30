@class NSString;

@interface TICryptographerMock : NSObject <TICryptographing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringDigestForName:(id)a0;

@end
