@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (nonatomic) unsigned int assertionID;
@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0 assertionTimeout:(double)a1;
- (id)initWithName:(id)a0;
- (void)takeAssertion;
- (void)dealloc;
- (void)releaseAssertion;
- (void).cxx_destruct;

@end
