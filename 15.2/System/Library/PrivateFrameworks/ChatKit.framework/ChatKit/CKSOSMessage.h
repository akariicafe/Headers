@class NSArray, NSString, CLLocation;

@interface CKSOSMessage : NSObject <NSCopying>

@property (copy, nonatomic, getter=handles) NSArray *handles;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *smsMessage;
@property (copy, nonatomic) NSString *mmsMessage;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *locationURL;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (nonatomic) BOOL useStandalone;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(id)a0 recipients:(id)a1;
- (id)initWithSMSMessage:(id)a0 mmsMessage:(id)a1 recipients:(id)a2;

@end
