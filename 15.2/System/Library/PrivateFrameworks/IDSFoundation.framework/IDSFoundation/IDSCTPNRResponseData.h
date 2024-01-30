@class NSString, NSData;

@interface IDSCTPNRResponseData : NSObject <IDSCTPNRResponseData>

@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *phoneBookNumber;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCTResponse:(id)a0 phoneBookNumber:(id)a1;
- (void).cxx_destruct;

@end
