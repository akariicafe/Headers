@class NSString, NSObject;

@interface TKKeyPathObservation : NSObject

@property (weak, nonatomic) NSObject *object;
@property (copy, nonatomic) NSString *keyPath;

- (void).cxx_destruct;

@end
