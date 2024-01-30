@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (nonatomic) unsigned int assertionID;
@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0 assertionTimeout:(double)a1;
- (void)releaseAssertion;
- (void)takeAssertion;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)dealloc;

@end
