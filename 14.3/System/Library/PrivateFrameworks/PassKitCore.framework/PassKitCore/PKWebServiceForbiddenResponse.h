@class NSNumber, NSString;

@interface PKWebServiceForbiddenResponse : PKWebServiceResponse

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
