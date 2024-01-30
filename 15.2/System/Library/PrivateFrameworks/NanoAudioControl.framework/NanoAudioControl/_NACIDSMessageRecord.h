@class NSString, PBCodable;

@interface _NACIDSMessageRecord : NSObject

@property (retain, nonatomic) PBCodable *message;
@property (nonatomic) long long type;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *queueOne;

- (void).cxx_destruct;

@end
