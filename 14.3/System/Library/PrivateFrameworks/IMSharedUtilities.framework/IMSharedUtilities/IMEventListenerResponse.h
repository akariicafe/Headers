@class NSDictionary, NSError, NSString;

@interface IMEventListenerResponse : NSObject <IMEventListenerResponse>

@property (nonatomic, getter=didSucceed) BOOL success;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 userInfo:(id)a1 error:(id)a2;

@end
