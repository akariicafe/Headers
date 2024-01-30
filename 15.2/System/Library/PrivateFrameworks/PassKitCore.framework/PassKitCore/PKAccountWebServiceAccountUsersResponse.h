@class NSSet, NSDate;

@interface PKAccountWebServiceAccountUsersResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSSet *users;
@property (readonly, nonatomic) NSDate *lastUpdated;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
