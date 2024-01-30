@class NSUUID, NSDictionary;

@interface PTPendingPush : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSDictionary *payload;
@property (copy, nonatomic) id /* block */ reply;

- (void).cxx_destruct;

@end
