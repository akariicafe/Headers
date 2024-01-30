@class NSUUID, KTRequest;

@interface KTRequestID : NSManagedObject

@property (copy, nonatomic) NSUUID *requestId;
@property (retain, nonatomic) KTRequest *request;

+ (id)fetchRequest;

@end
