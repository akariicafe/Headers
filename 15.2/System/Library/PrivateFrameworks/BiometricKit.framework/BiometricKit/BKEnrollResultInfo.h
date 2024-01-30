@class BKIdentity;

@interface BKEnrollResultInfo : NSObject

@property (retain, nonatomic) BKIdentity *enrolledIdentity;

- (void).cxx_destruct;
- (id)initWithServerIdentity:(id)a0 details:(id)a1 device:(id)a2;

@end
