@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (nonatomic) unsigned int assertionID;
@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseAssertion;
- (void)takeAssertion;
- (id)initWithName:(id)a0 assertionTimeout:(double)a1;
- (id)initWithName:(id)a0;

@end
