@class NSString, NSDate;

@interface IMDaemonQuery : NSObject

@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (id)description;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 key:(id)a1 completionHandler:(id /* block */)a2;

@end
