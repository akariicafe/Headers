@class NSString;

@interface VSSetTopBoxProfile : NSObject

@property (retain, nonatomic) NSString *providerID;
@property (retain, nonatomic) NSString *userToken;
@property (nonatomic) BOOL isDeveloper;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProviderID:(id)a0 userToken:(id)a1 isDeveloper:(BOOL)a2;

@end
