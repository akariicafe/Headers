@class NSString, NSMutableData;

@interface _HKAppImageManagerContainer : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSMutableData *data;

- (void).cxx_destruct;

@end
