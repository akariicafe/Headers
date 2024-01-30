@class NSString, NSDate;

@interface MRExternalDeviceConnectionDetails : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) unsigned int qos;
@property (copy, nonatomic) id /* block */ completion;

- (id)description;
- (void).cxx_destruct;

@end
