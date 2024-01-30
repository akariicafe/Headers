@class NSString, NSDate;

@interface BBObserverGatewayAddBulletinRequest : NSObject

@property (copy, nonatomic) NSString *bulletinID;
@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSDate *timeout;
@property (copy, nonatomic) id /* block */ timeoutHandler;

- (void).cxx_destruct;

@end
