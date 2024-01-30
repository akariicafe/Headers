@class NSString;

@interface IEResponse : NSObject

@property (retain, nonatomic) NSString *response_id;
@property (retain, nonatomic) NSString *inputGroupId;
@property (nonatomic) BOOL sensitiveData;
@property (retain, nonatomic) NSString *dialogPhase;

- (void).cxx_destruct;

@end
