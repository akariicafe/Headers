@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject

@property (retain, nonatomic) NSString *serviceString;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSNumber *weight;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSString *target;

- (void).cxx_destruct;
- (id)description;

@end
