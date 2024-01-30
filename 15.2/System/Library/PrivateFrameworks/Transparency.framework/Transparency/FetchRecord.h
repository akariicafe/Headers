@class NSUUID, NSData, KTRequest;

@interface FetchRecord : NSManagedObject

@property (copy, nonatomic) NSUUID *fetchId;
@property (retain, nonatomic) NSData *requestData;
@property (retain, nonatomic) KTRequest *request;

+ (id)fetchRequest;

@end
