@class NSString, NSUUID, NSURL, NSURLSessionDataTask, ISURLOperation;

@interface IKLoadRecord : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) ISURLOperation *opertaion;
@property (nonatomic) BOOL loadCompleted;
@property (retain, nonatomic) NSString *scriptStr;
@property (retain, nonatomic) NSUUID *requestID;
@property (retain, nonatomic) NSURLSessionDataTask *dataTask;

- (void).cxx_destruct;

@end
