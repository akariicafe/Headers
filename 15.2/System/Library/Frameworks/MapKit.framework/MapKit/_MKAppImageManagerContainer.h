@class NSString, NSMutableData;

@interface _MKAppImageManagerContainer : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) unsigned long long signpostID;

- (void).cxx_destruct;

@end
